/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babyf <babyf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 15:48:39 by babyf             #+#    #+#             */
/*   Updated: 2025/08/27 16:19:36 by babyf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/* finds the min value and assigns it the min index */
int		find_minindex(t_stack **stack)
{
	int		i;
	int		min_value;
	int		min_index;
	t_stack	*current;

	i = 0;
	min_index = 0;
	min_value = (*stack)->num; 
	current = *stack; /* or (*stack)->next */
	while (current)
	{
		if (current->num < min_value)
		{
			min_value = current->num;
			min_index = i;
		}
		else
			current = current->next;
		i++;
	}
	return (min_index);
}

/* moves the min index to the top */
void		min_to_top(t_stack **stack, int min_index)
{
	int		size;

	if (min_index == -1)
		return ;
	size = (*stack)->size;
	if (min_index <= size / 2)
	{
		while (min_index-- > 0)
			rotate(*stack, 0);
	}
	else
	{
		min_index = size - min_index;
		while (min_index-- > 0)
			rev_rotate(*stack, 0);
	}
}


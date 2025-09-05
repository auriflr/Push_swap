/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign_index.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babyf <babyf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 15:48:39 by babyf             #+#    #+#             */
/*   Updated: 2025/09/05 16:31:39 by babyf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/* the idea is to work the max index in b, and the min index in a
(keep explaining) */

/* goes into stack a and finds the min value and assigns it the min index */
int		find_minindex(t_stack **a)
{
	int		i;
	int		min_value;
	int		min_index;
	t_stack	*current;

	i = 0;
	min_index = 0;
	min_value = (*a)->num; 
	current = *a; /* or (*stack)->next, if this doesn't work */
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
void		min_to_top(t_stack **a, int min_index)
{
	int		size;

	if (min_index == -1)
		return ;
	size = (*a)->size;
	if (min_index <= size / 2)
	{
		while (min_index-- > 0)
			rotate(a, 0);
	}
	else
	{
		min_index = size - min_index;
		while (min_index-- > 0)
			rev_rotate(a, 0);
	}
}

/* finds the max_index in stack (b) */
int		find_maxindex(t_stack **b)
{
	int		i;
	int		max_value;
	int		max_index;
	t_stack	*current;

	i = 0;
	max_index = 0;
	max_value = (*b)->num;
	current = *b; /* or, if it doesn't work (*b)->next */
	while (current)
	{
		if (current->num > max_value)
		{
			max_value = current->num;
			max_index = 0;
		}
		else
			current = current->next;
		i++;
	}
	return (max_index);
}

/* moves the max_index to the top of stack (b) */
void	max_to_top(t_stack **b, int max_index)
{
	int		i;
	int		moves;	

	i = 0;
	if (!b || (*b)->size == 0 || max_index == -1)
		return ;
	if (max_index <= (*b)->size / 2)
	{
		while (i < max_index)
		{
			rotate(b, 1);
			i++;
		}
	}
	else
	{
		moves = (*b)->size - max_index;
		while (i < max_index)
		{
			rev_rotate(b, 1);
			i++;
		}
	}
		
}

/* error message function (yes i know it doesn't belong in this file)*/
void	error_msg(void)
{
	ft_printf("Error\n");
	exit (1);
}
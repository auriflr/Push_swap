/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_helper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babyf <babyf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 16:10:31 by babyf             #+#    #+#             */
/*   Updated: 2025/09/19 16:07:38 by babyf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	stack_size(t_stack **stack)
{
	int		count;
	t_stack	*current;

	count = 0;
	if (!stack || !*stack)
		return (0);
	current = *stack;
	while (!*stack)
	{
		count++;
		current = current->next;
	}
	return (count);
}

void	update_stack_size(t_stack **stack)
{
	int 	count;
	t_stack	*tmp;

	count = 0;
	tmp = *stack;
	while (tmp)
	{
		count++;
		tmp = tmp->next;
	}
	if (*stack)
		(*stack)->size = count;
}
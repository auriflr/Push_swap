/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babyf <babyf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 15:50:02 by babyf             #+#    #+#             */
/*   Updated: 2025/08/26 16:26:53 by babyf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/* pushes to stack the numbers from the input string
WORK ON THIS*/
void	push_to_stack(t_stack **stack, int value)
{
	t_stack	*new;
	t_stack	*current;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (!new)
		return ;
	/* assign values */ 
	new->num = value;
	new->next = NULL; 
	if ((*stack)->next == NULL)
	{
		(*stack)->next = new;
	}
	else 
	{
		current = (*stack)->next;
		while (current->next != 0)
		{
			current = current->next;
		}
		current->next = new;
	}
	(*stack)->size++;
}

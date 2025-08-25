/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babyf <babyf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 16:23:17 by babyf             #+#    #+#             */
/*   Updated: 2025/08/25 17:05:53 by babyf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	push(t_stack *stack, int value)
{
	t_stack	*node;

	node = (t_stack *)malloc(sizeof(t_stack));
	if (!node)
		return ;
	// node->num = value;
	// node->next = stack->next;
	// stack->next = node->next;
	stack->size++;
}

int	pop(t_stack *stack)
{
	int		value;
	t_stack	*tmp;

	if (!stack || !stack->next)
		return ;
	// tmp = stack->next;
	// value = tmp->num;
	// stack->next = tmp->next;
	// free (tmp);
	stack->size--;
	return (value);
}
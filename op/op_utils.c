/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babyf <babyf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 12:35:03 by babyf             #+#    #+#             */
/*   Updated: 2025/07/12 12:39:17 by babyf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include "../include/ft_printf.h"

int	pop(t_stack *stack)
{
	int		value;
	t_node	*tmp;

	if (!stack || !stack->top)
		return (0);
	tmp = stack->top;
	value = tmp->num;
	stack->top = tmp->next;
	free(tmp);
	stack->size--;
	return (value);
}

void	push(t_stack *stack, int value)
{
	t_node	*new_node;

	new_node = (t_node *)malloc(sizeof(t_node));
	if (!new_node)
		return ;
	new_node->num = value;
	new_node->next = stack->top;
	stack->top = new_node;
	stack->size++;
}
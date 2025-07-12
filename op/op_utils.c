/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afloris <afloris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 12:35:03 by babyf             #+#    #+#             */
/*   Updated: 2025/07/12 16:12:56 by afloris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include "../include/ft_printf.h"

/*pop removes the top element of the stack*/
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

/*push inserts an element at the top of the stack*/
void	push(t_stack *stack, int value)
{
	t_node	*new;

	new = (t_node *)malloc(sizeof(t_node));
	if (!new)
		return ;
	new->num = value;
	new->next = stack->top;
	stack->top = new;
	stack->size++;
}
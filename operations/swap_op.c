/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babyf <babyf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 19:03:59 by babyf             #+#    #+#             */
/*   Updated: 2025/08/07 19:10:25 by babyf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sa(t_stack *a)
{
	t_node	*tmp;

	if (!a || !a->top)
		return (NULL);
	tmp = a->top->next;
	a->top->next = tmp->next;
	tmp->next = a->top;
	a->top = tmp;
	ft_printf("sa\n");
}

void	sb(t_stack *b)
{
	t_node	*tmp;
	
	if (!b || b->top)
		return (NULL);
	tmp = b->top->next;
	b->top->next = tmp->next;
	tmp->next = a->top;
	a->top = tmp;
	ft_printf("sb\n");
}

void	ss(t_stack *a, t_stack *b)
{
	sa(a);
	sb(b);
}
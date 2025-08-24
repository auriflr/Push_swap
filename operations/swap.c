/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_op.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babyf <babyf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 19:03:59 by babyf             #+#    #+#             */
/*   Updated: 2025/08/24 17:33:02 by babyf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sa(t_stack *a)
{
	t_stack	*tmp;

	if (!a || !a->next)
		return (NULL);
	tmp = a->next->next;
	a->next->next = tmp->next;
	tmp->next = a->next;
	a->next = tmp;
	ft_printf("sa\n");
}

void	sb(t_stack *b)
{
	t_stack	*tmp;
	
	if (!b || b->next)
		return (NULL);
	tmp = b->next->next;
	b->next->next = tmp->next;
	tmp->next = b->next;
	b->next = tmp;
	ft_printf("sb\n");
}

void	ss(t_stack *a, t_stack *b)
{
	sa(a);
	sb(b);
}
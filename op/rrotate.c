/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babyf <babyf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 08:47:10 by babyf             #+#    #+#             */
/*   Updated: 2025/07/13 12:54:02 by babyf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include "../include/ft_printf.h"

/*shifts up all elements of stack a,
or b, or both by 1. Last becomes first*/

void	rrotate_a(t_stack *a)
{
	t_node	*prev;
	t_node	*last;

	if (a->size < 2)
		return ;
	prev = NULL;
	last = a->top;
	while (last->next)
	{
		prev = last;
		last = last->next;
	}
	prev->next = NULL;
	last->next = a->top;
	a->top = last;
	ft_printf("rra\n");
}

void 	rrotate_b(t_stack *b)
{
	t_node	*prev;
	t_node	*last;

	if (b->size < 2)
		return ;
	prev = NULL;
	last = a->top;
	while (last->next)
	{
		prev = last;
		last = last->next;
	}
	prev->next = NULL;
	last->next = a->top;
	a->top = last;
}

void	rrotate_r(t_stack *a, t_stack *b)
{
	rrotate_a(a);
	rrotate_b(b);
	ft_printf("rrr\n");
}
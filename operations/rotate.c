/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babyf <babyf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 13:47:20 by babyf             #+#    #+#             */
/*   Updated: 2025/08/25 17:05:53 by babyf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ra(t_stack *a)
{
	t_stack	*tmp;
	t_stack	*last;

	if (a->size < 2 || !a->next || !a->next->next)
		return ;
	tmp = a->next;
	a->next = a->next->next;
	tmp->next = NULL;
	last = a->next;
	while (last->next)
		last = last->next;
	last->next = tmp;
	printf("ra\n");
}

void	rb(t_stack *b)
{
	t_stack *tmp;
	t_stack *last;

	if (b->size < 2 || !b->next || !b->next->next)
		return ;
	tmp = b->next;
	b->next = b->next->next;
	tmp->next = NULL;
	last = b->next;
	// while (last->next)
		// last = last->next;
	// last->next = tmp;
	printf("rb\n");
}

void	rr(t_stack *a, t_stack *b)
{
	ra(a);
	ra(b);
	printf("rr\n");
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_ops.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afloris <afloris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 14:55:15 by babyf             #+#    #+#             */
/*   Updated: 2025/10/24 15:26:44 by afloris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/* the first element becomes the last one */
void	ra(t_stack**a)
{
	t_stack	*first;
	t_stack	*last;

	if (!a || !(*a))
		return ;
	first = *a;
	*a = (*a)->next;
	first->next = NULL;
	last = *a;
	while (last->next)
		last = last->next;
	last->next = first;
	ft_printf("ra\n");
	print_stack(a);
}

void	rb(t_stack **b)
{
	t_stack	*first;
	t_stack	*last;

	if (!b || !(*b))
		return ;
	first = *b;
	*b = ((*b)->next);
	first->next = NULL;
	last = *b;
	while (last->next)
		last = last->next;
	last->next = first;
	ft_printf("rb\n");
	print_stack(b);
}

void	rr(t_stack **a, t_stack **b)
{
	ra(a);
	rb(b);
	ft_printf("rr\n");
}

/* the last element becomes the first one */
void	rev_rotate(t_stack **stack, int flag)
{
	t_stack		*last;
	t_stack		*prev;

	if (!stack || !(*stack))
		return ;
	prev = NULL;
	last = *stack;
	while (last->next)
	{
		prev = last;
		last = last->next;
	}
	prev->next = NULL;
	last->next = *stack;
	*stack = last;
	if (flag == 0)
		ft_printf("rra\n");
	else if (flag == 1)
		ft_printf("rrb\n");
}

void	rrr(t_stack **a, t_stack **b)
{
	rev_rotate(a, 0);
	rev_rotate(b, 0);
	ft_printf("rrr\n");
}

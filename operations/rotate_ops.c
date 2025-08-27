/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_ops.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babyf <babyf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 14:55:15 by babyf             #+#    #+#             */
/*   Updated: 2025/08/27 15:33:03 by babyf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/* the first element becomes the last one */ 
void	rotate(t_stack **stack, int flag)
{
	t_stack *first_node;
	t_stack	*last_node;

	if (!*stack || !(*stack)->next)
		return ;
	first_node = *stack;
	*stack = (*stack)->next;
	first_node->next = NULL;
	last_node = *stack;
	while (last_node->next)
		last_node = last_node->next;
	last_node->next = first_node;
	if (flag == 0)
		ft_printf("ra\n");
	if (flag == 1)
		ft_printf ("rb\n");
}

void	rr(t_stack **a, t_stack **b)
{
	rotate(a, 2);
	rotate(b, 2);
	ft_printf("rr\n");
}

/* the last element becomes the first one */
void	rev_rotate(t_stack **stack, int flag)
{
	t_stack		*last;
	t_stack		*prev;
	
}
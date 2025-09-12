/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swappush.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babyf <babyf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 14:23:46 by babyf             #+#    #+#             */
/*   Updated: 2025/09/12 16:41:08 by babyf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/* swaps the first two elements of the stack
does nothing if the stack is empty */ 
void	swap(t_stack **stack, int flag)
{
	t_stack	*first_node;
	t_stack *second_node;

	if (!*stack || !(*stack)->next)
		return ;
	ft_printf("calling sa!\n");
	first_node = *stack;
	second_node = (*stack)->next;
	first_node->next = second_node->next;
	second_node->next = first_node;
	*stack = second_node;
	/* the problem is not the flag */
	if (flag == 0)
		ft_printf("sa\n");
	else if (flag == 1)
		ft_printf("sb\n");
}

/* does both sa and sb */ 
void	ss(t_stack **a, t_stack **b)
{
	swap(a, 2);
	swap(b, 2);
	ft_printf("ss\n");
}

/* pushes the first element of the stack on top of the other stack */
void	push(t_stack **dst_stack, t_stack **src_stack, int flag)
{
	t_stack		*tmp;

	if (!*src_stack)
		return ;
	tmp = *src_stack;
	*src_stack = (*src_stack)->next;
	tmp->next = *dst_stack;
	*dst_stack = tmp;
	if (flag == 0)
		ft_printf("pa\n");
	if (flag == 1)
		ft_printf("pb\n");
}

/* pushes every element of b to a, starting from the maximum index*/
void	b_to_a(t_stack **a, t_stack **b)
{
	int	max_index;

	while ((*b)->size > 0)
	{
		max_index = find_maxindex(a);
		max_to_top(a, max_index);
		push(a, b, 0);
		if ((*a)->size && (*a)->next->num && (*a)->next->next->num) /* not so sure about this */
			swap(a, 0);
	}
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swappush.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afloris <afloris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 14:23:46 by babyf             #+#    #+#             */
/*   Updated: 2025/10/24 15:38:47 by afloris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/* swaps the first two elements of the stack
does nothing if the stack is empty */
void	swap(t_stack **stack, int flag)
{
	t_stack	*first_node;
	t_stack	*second_node;

	if (!*stack || !(*stack)->next)
		return ;
	first_node = *stack;
	second_node = (*stack)->next;
	first_node->next = second_node->next;
	second_node->next = first_node;
	*stack = second_node;
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

void	pa(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	if (!b || !(*b))
		return ;
	tmp = *b;
	*b = (*b)->next;
	tmp->next = *a;
	*a = tmp;
	ft_printf("pa\n");
	print_stack(a);
	print_stack(b);
}

void	pb(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	if (!a || !(*a))
		return ;
	tmp = *a;
	*a = (*a)->next;
	tmp->next = *b;
	*b = tmp;
	ft_printf("pb\n");
	print_stack(a);
	print_stack(b);
}

/* pushes every element of b to a, starting from the maximum index*/
void	b_to_a(t_stack **a, t_stack **b)
{
	int	max_index;

	while (stack_size(b) > 0)
	{
		max_index = find_maxindex(b);
		max_to_top(b, max_index);
		pa(a, b);
	}
}

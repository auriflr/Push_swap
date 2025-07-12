/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babyf <babyf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 16:46:54 by afloris           #+#    #+#             */
/*   Updated: 2025/07/12 12:11:50 by babyf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*explain what i'm doing in this part*/

#include "../include/push_swap.h"
#include "../include/ft_printf.h"

void	swap_a(t_stack *a)
{
	t_node	*tmp;

	if (a->size < 2)
		return ;
	tmp = a->top->next;
	a->top->next = tmp->next;
	tmp->next = a->top;
	a->top = tmp;
	ft_printf("sa\n");
}

void	swap_b(t_stack *b)
{
	t_node	*tmp;

	if (b->size < 2)
		return ;
	tmp = b->top->next;
	b->top->next = tmp->next;
	tmp->next = b->top;
	b->top = tmp;
	ft_printf("sb\n");
}

void	swap_r(t_stack *a, t_stack *b)
{
	swap_a(a);
	swap_b(b);
	ft_printf("ss\n");
}
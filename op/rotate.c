/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babyf <babyf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 08:46:53 by babyf             #+#    #+#             */
/*   Updated: 2025/07/13 12:53:31 by babyf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include "../include/ft_printf.h"

/*shifts up all elements of stack a,
or b, or both by 1. First becomes last*/

void	rotate_a(t_stack *a)
{
    t_node  *tmp;
    t_node  *last;

    if (a-> size < 2 || !a->top || !a->top->next)
        return ;
    tmp = a->top;
    a->top = a->top->next;
    tmp->next = NULL;
    last = a->top;
    while (last->next) /*traverse the string to find the last node*/
        last = last->next;
    last->next = tmp;
    ft_printf("ra\n");
}

void	rotate_b(t_stack *b)
{
    t_node  *tmp;
    t_node  *last;
    
    if (b->size < 2)
        return ;
    tmp = b->top;
    b->top = b->top->next;
    tmp->next = NULL;
    last = a->top;
    while (last->next)
        last = last->next;
    last->next = tmp;
    ft_printf("rb\n");
}

void	rotate_r(t_stack *a, t_stack *b)
{
	rotate_a(a);
    rotate_b(b);
    ft_printf("rr\n");
}
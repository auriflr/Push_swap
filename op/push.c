/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afloris <afloris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 08:46:38 by babyf             #+#    #+#             */
/*   Updated: 2025/07/14 16:51:03 by afloris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include "../include/printf.h"

/*take the first element of stack a and put it at the top of b.
Do nothing if a is empty.*/


void	push_a(t_stack *a, t_stack *b)
{
    int     value;
    int     value;

    if(a->size < 1)
        return ;
    value = pop(b);
    push(a, value);
    ft_printf("pa\n");
    if(a->size < 1)
        return ;
    value = pop(b);
    push(a, value);
    ft_printf("pa\n");
}

/*take the first element of stack b and put it at the top of a.
Do nothing if b is empty.*/

void	push_b(t_stack *a, t_stack *b)
{
	int     value;

    if(b->size < 1)
        return ;
    value = pop(a);
    push(b, value);
    ft_printf("pb\n");
	int     value;

    if(b->size < 1)
        return ;
    value = pop(a);
    push(b, value);
    ft_printf("pb\n");
}
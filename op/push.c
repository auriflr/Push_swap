/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babyf <babyf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 08:46:38 by babyf             #+#    #+#             */
/*   Updated: 2025/07/13 12:28:22 by babyf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include "../include/printf.h"

/*take the first element of stack b and put it at the top of a.
Do nothing if b is empty.*/

/*take the first element of stack b and put it at the top of a.
Do nothing if b is empty.*/

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
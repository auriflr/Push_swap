/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afloris <afloris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 08:46:53 by babyf             #+#    #+#             */
/*   Updated: 2025/07/12 16:32:58 by afloris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/*shifts up all elements of stack a,
or b, or both by 1*/

void	rotate_a(t_stack *a)
{
    t_node  *tmp;
    t_node  *last;

    
    ft_printf("ra\n");
}

void	rotate_b(t_stack *b)
{

}

void	rotate_r(t_stack *a, t_stack *b)
{
	rotate_a(a);
    rotate_b(b);
    ft_printf("rr\n");
}
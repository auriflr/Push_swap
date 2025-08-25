/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babyf <babyf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 13:08:11 by babyf             #+#    #+#             */
/*   Updated: 2025/08/25 17:05:53 by babyf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	pa(t_stack *a, t_stack *b)
{
	int	value;

	// if (b->size < 1)
		// return ;
	value = pop (b);
	push(a, value);
	printf("pa\n");
}

void	pb(t_stack *a, t_stack *b)
{
	int value;

	// if (a->size < 1)
		// return ;
	value = pop (a);
	push (b, value);
	printf("pb\n");
}

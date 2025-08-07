/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babyf <babyf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 19:02:59 by babyf             #+#    #+#             */
/*   Updated: 2025/08/07 19:34:04 by babyf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sort_three(t_stack *a)
{
	int		n1;
	int		n2;
	int		n3;

	if (!a || !a->top)
		return (NULL);
	if (n1 > n2 && n2 < n3 && n1 > n3)
		ra(a);
	else if (n1 > n2 && n2 > n3 && n1 > n3)
		sa(a);
	else if(n1 < n2 && n2 > n3 && n1 > n3)
		rra(a);
	else if (n1 < n2 && n2 > n3 && n3 > n1)
	{
		sa(a);
		ra(a);
	}
	else if (n1 > n2 && n2 < n3)
	{
		sa(a);
		ra(a);
	}
}

void	stack_sorted(t_stack *stack)
{
	
}
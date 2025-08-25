/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babyf <babyf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 18:57:01 by babyf             #+#    #+#             */
/*   Updated: 2025/08/25 15:50:11 by babyf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	initialize(t_stack **a, t_stack **b)
{
	*a = init_stack();
	*b = init_stack();
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	initialize(a, b);
	
	return (0);
}
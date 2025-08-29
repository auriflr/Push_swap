/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babyf <babyf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 15:50:02 by babyf             #+#    #+#             */
/*   Updated: 2025/08/28 09:46:25 by babyf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/* assigns an index to the values, smallest index to smallest number */
void	assign_index_values(t_stack **stack)
{
	
}

/* fills the stack with the values parsed from the input string */
void	fill_stack_values(t_stack **stack, char **av)
{
	int		i;
	long	value;

	i = 1;
	while (av[i])
	{
		value = ft_atol(av[i]);
		if (value > 2147483648 || value < -2147483648)
			error_msg();
		/* a function to push to stack */
		i++;
	}
}

/* fills the stack with the input array */ 
void	**fill_stack(t_stack **stack, char **av)
{
	fill_stack_values(stack, *av);
	assign_index_values(stack);
}

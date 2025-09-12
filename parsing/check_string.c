/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babyf <babyf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 09:45:28 by babyf             #+#    #+#             */
/*   Updated: 2025/09/12 15:14:51 by babyf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/* checks the input string for valid characters */
int		check_string(char *arg)
{
	int	i;
	int	dgt;

	i = 0;
	dgt = 0;
	while (arg[i])
	{
		if (arg[i] == '-')
		{
			if (arg[i + 1] && !ft_isdigit(arg[i + 1]))
				return (0);
			i++;
		}
		if (ft_isdigit(arg[i]))
			dgt = 1;
		else if (arg[i] != ' ')
			return (0);
		i++;
	}
	return (dgt);
}

int		is_sorted(t_stack **stack)
{
	t_stack	*tmp;

	tmp = *stack; /* or (*stack)->next if it doesn't work */
	while (tmp)
	{
		if (tmp->num > tmp->next->num) /* or tmp->num->next if it doesn't work */
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

int		is_valid(int ac, char **av)
{
	if (ac < 2)
		return (0);
	else if (ac == 2)
	{
		if (check_string(av[1]) == 0)
			return (0);
	}
	else if (ac > 2)
	{
		if (check_args(ac, av) == 0)
			return (0);
	}
	return (1);
}
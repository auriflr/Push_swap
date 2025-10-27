/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afloris <afloris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 14:14:07 by babyf             #+#    #+#             */
/*   Updated: 2025/10/27 16:29:25 by afloris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/* Two conditions:
if it's negative and if it's not a digit, first skip, then return 0;
if ok, return 1. */
int	check_args(int ac, char **av)
{
	int		i;
	int		j;

	i = 1;
	while (i < ac)
	{
		j = 0;
		if (av[i][j] == '\0')
			return (0);
		if (av[i][j] == '+' || av[i][j] == '-')
			j++;
		while (av[i][j])
		{
			if (!ft_isdigit(av[i][j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

/* checks for duplicates and return 0 if one is found.
Return 1 if not. */
int	check_dup(int ac, char **av)
{
	int		i;
	int		j;

	i = 1;
	if (i < ac)
	{
		j = i + 1;
		while (j < ac)
		{
			if (ft_atoi(av[i]) == ft_atoi(av[j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

/* checks if the sorting is correct */
int	check_sorted(int ac, char **av)
{
	int		i;

	i = 1;
	if (i < ac - 1)
	{
		if (ft_atoi(av[i]) > ft_atoi(av[i + 1]))
			return (0);
		i++;
	}
	return (1);
}

/* checks all three and returns 0 if there's an error, 1 if ok */
int	final_check(int ac, char **av)
{
	if (check_args(ac, av) == 0)
		return (0);
	if (check_dup(ac, av) == 0)
		return (0);
	if (!check_sorted(ac, av))
		return (0);
	return (1);
}

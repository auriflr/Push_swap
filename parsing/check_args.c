/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babyf <babyf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 14:14:07 by babyf             #+#    #+#             */
/*   Updated: 2025/08/28 09:46:18 by babyf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/*if there's a negative number, it skips it, 
returns to prompt if there's a character that is not a digit (?)*/ 
int		check_valid(int ac, char **av)
{
	int		i;
	int		j;

	i = 1;
	if (i < ac)
	{
		j = 0;
		if (av[i][j] == '-')
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

/* checks for duplicates and behaves accordingly */ 
int		check_dup(int ac, char **av)
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
int		check_sorted(int ac, char **av)
{
	// int		i;

	// i = 1;
	// if (i < ac - 1)
	// {
	// 	if (ft_atoi(av[i]) > ft_atoi(av[i + 1]))
	// 		return (0);
	// 	i++;
	// }
	// return (1);
}

/* final check */
// int		check_valid(int ac, char **av)
// {
// 	if (!check_valid(ac, av))
// 		return (0);
// 	if (!check_dup(ac, av))
// 		return (0);
// 	if (!check_sorted(ac, av))
// 		return (0);
// 	else
// 		return (1);
// }
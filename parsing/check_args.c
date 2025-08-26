/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babyf <babyf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 14:14:07 by babyf             #+#    #+#             */
/*   Updated: 2025/08/26 16:11:35 by babyf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/*if there's a negative number, it skips it, 
returns to prompt if there's a character that is not a digit (?)*/ 
int		check_args(int ac, char **av)
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

/*checks for duplicates and behaves accordingly*/ 
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

int		is_valid()
{
	
}
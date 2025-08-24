/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babyf <babyf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 10:43:04 by babyf             #+#    #+#             */
/*   Updated: 2025/08/24 13:20:23 by babyf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/*some arguments not being integers, some arguments
exceeding the integer limits, and/or the presence of duplicates.*/

int		is_valid(int ac, char **av)
{
	int		i;
	int		j;

	i = 1;
	while (i < ac)
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

int		check_dup(int ac, char **av)
{
	int		i;
	int		j;

	i = 1;
	

}
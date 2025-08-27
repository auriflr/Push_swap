/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babyf <babyf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 15:59:35 by babyf             #+#    #+#             */
/*   Updated: 2025/08/27 16:19:39 by babyf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/* helper function to skip spaces and signs */
void	skip_sign(const char *str, int *i, int *sign)
{
	while (str[*i] && str[*i] == ' ' || (str[*i] >= '\t' && str[*i] <= '\r'))
		(*i)++;
	while (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
			sign = -1;
		(*i)++;
	}
}

/* converts a long int into a string */
long	ft_atol(const char *str)
{
	int		i;
	int		sign;
	int		res;

	i = 0;
	res = 0;
	sign = 1;
	skip_sign(str, &i, &sign);
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (res > (2147483647 - (str[i] - '0')) / 10)
		{
			if (sign == 1)
				return (2147483648);
			else
				return (-2147483648);
		}
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);
}

/* error message function (yes i know it doesn't belong in this file)*/
void	error_msg(void)
{
	ft_printf("Error\n");
	exit (1);
}
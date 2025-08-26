/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babyf <babyf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 15:59:35 by babyf             #+#    #+#             */
/*   Updated: 2025/08/26 16:24:53 by babyf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babyf <babyf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 09:29:08 by babyf             #+#    #+#             */
/*   Updated: 2025/09/23 19:41:34 by babyf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sort_three(t_stack **a)
{
	int		n1;
	int		n2;
	int		n3;

	if (!*a || !(*a)->next || !(*a)->next->next)
		return;
	n1 = (*a)->num;
	n2 = (*a)->next->num;
	n3 = (*a)->next->next->num;
	if (n1 > n2 && n2 > n3)
	{
		swap(a, 0);
		rev_rotate(a, 0);
	}
	else if (n1 > n2 && n2 < n3 && n1 < n3)
		swap(a, 0);
	else if (n1 > n2 && n2 < n3 && n1 > n3)
		rotate(a, 0);
	else if (n1 < n2 && n2 > n3 && n1 > n3)
		rev_rotate(a, 0);
	else if (n1 < n2 && n2 > n3 && n1 < n3)
	{
		swap(a, 0);
		rotate(a, 0);
	}
}

void	sort_four(t_stack **a, t_stack **b)
{
	int	min_index;

	min_index = find_minindex(a);
	ft_printf("sort four minimum index: %d\n");
	print_stack(a);
	min_to_top(a, min_index);
	ft_printf("sort-four called\n");
	push(a, b, 1);
	sort_three(a);
	push(a, b, 0);
	print_stack(a);
}

void	sort_five(t_stack **a, t_stack **b)
{
	int	min_index;

	min_index = find_minindex(a);
	min_to_top(a, min_index);
	push(a, b, 1);
	min_index = find_minindex(a);
	min_to_top(a, min_index);
	push(a, b, 0);
	sort_three(a);
	push(a, b, 1);
	push(a, b, 1);
}

/* helper function to skip spaces and signs */
void	skip_sign(const char *str, int *i, int *sign)
{
	while ((str[*i] && str[*i] == ' ') || (str[*i] >= '\t' && str[*i] <= '\r'))
		(*i)++;
	while (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
			*sign = -1;
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

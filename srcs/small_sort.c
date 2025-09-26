/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babyf <babyf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 09:29:08 by babyf             #+#    #+#             */
/*   Updated: 2025/09/26 18:04:05 by babyf            ###   ########.fr       */
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

	/*ft_printf("sort-four called\n");*/
	min_index = find_minindex(a);
	/*ft_printf("sort four minimum index: %d\n", min_index);*/
	print_stack(a);
	min_to_top(a, min_index);
	pb(a, b);
	/*print_stack(b);
	print_stack (a);*/
	ft_printf("second sort four minimum index: %d\n", min_index);
	sort_three(a); 
	/*ft_printf("sort three called\n");*/
	pa(a, b);
	print_stack(a);
	print_stack (b);
}

void	sort_five(t_stack **a, t_stack **b)
{
	int	min_index;

	min_index = find_minindex(a);
	min_to_top(a, min_index);
	pb(a, b);
	min_index = find_minindex(a);
	min_to_top(a, min_index);
	pb(a, b);
	sort_three(a);
	pa(a, b);
	pa(a, b);
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

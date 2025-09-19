/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babyf <babyf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 13:28:05 by babyf             #+#    #+#             */
/*   Updated: 2025/09/19 17:05:59 by babyf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/* initializes the stack keeping in mind the sentil node at the beginning*/ 
void	init_stack(t_stack **stack)
{
	t_stack		*sentinel;

	sentinel = (t_stack *)malloc(sizeof(t_stack));
	if (!sentinel)
	{
		ft_printf("Error\n");
		exit(EXIT_FAILURE);
	}
	sentinel->num = 0;
	sentinel->next = NULL;
	sentinel->size = 0;
	*stack = sentinel;
}

/* frees the stack */
void	free_stack(t_stack **stack)
{
	t_stack		*tmp;

	if (!*stack)
		return ;
	while ((*stack)->next)
	{
		tmp = (*stack)->next;
		(*stack)->next = (*stack)->next->next;
		free(tmp);
	}
	free (*stack);
}

void	sort_stacks(t_stack **a, t_stack **b)
{
	int	size;

	size = stack_size (a);
	if (is_sorted(a) || (*a)->size == 1)
		return ;
	else if (size == 2)
		swap(a, 0);
	else if (size == 3)
		sort_three(a);
	else if (size == 4)
		sort_four(a, b);
	else if (size == 5)
		sort_five(a, b);
	else if (size <= 100)
		ft_radixsort(a, b, 5);
	else
		ft_radixsort(a, b, 11);
}

int		main(int ac, char **av)
{
	t_stack		*a;
	t_stack		*b;

	a = NULL;
	b = NULL;
	if (!is_valid(ac, av))
	{
		ft_printf("Error\n");
		exit(EXIT_FAILURE);
	}
	init_stack (&a);
	init_stack (&b);
	if (ac == 2)
		fill_stack_string(&a, av[1]);
	else
		fill_stack_values(&a, av);
	update_stack_size(&a);
	sort_stacks(&a, &b);
	free_stack(&a);
	free_stack(&b);
	return (0);
}

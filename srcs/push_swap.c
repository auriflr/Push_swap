/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babyf <babyf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 13:28:05 by babyf             #+#    #+#             */
/*   Updated: 2025/09/29 11:03:41 by babyf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
 
t_stack **init_stack(void)
{
    t_stack **stack;

    stack = (t_stack **)malloc(sizeof(t_stack *));
    if (!stack)
        return NULL;
    *stack = NULL;
    return stack;
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
	if (is_sorted(a) || size == 1)
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
	t_stack		**a;
	t_stack		**b;

	a = init_stack();
	b = init_stack ();
	if (!is_valid(ac, av))
	{
		ft_printf("Error\n");
		exit(EXIT_FAILURE);
	}
	if (ac == 2)
	{
		fill_stack_string(a, av[1]);
	}
	else
	{
		fill_stack_values(a, av);
		assign_index_values(a);
	}
	update_stack_size(a);
	sort_stacks(a, b);
	free_stack(a);
	free_stack(b);
	return (0);
}

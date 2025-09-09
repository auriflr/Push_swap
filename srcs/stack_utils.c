/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babyf <babyf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 15:50:02 by babyf             #+#    #+#             */
/*   Updated: 2025/09/09 15:32:39 by babyf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/* gets the index of a certain value and returns it if it's found.
if it's not found, returns -1*/
int		get_index(int *array, int value, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}

/* pushes a new value at the end of the stack 
this might cause issues, so keep an eye on it */
void	push_to_stack(t_stack **stack, int value)
{
	t_stack	*new_last;
	t_stack	*current;

	new_last = (t_stack *)malloc(sizeof(t_stack));
	if (!new_last)
		return ;
	new_last->num = value;
	new_last->next = NULL;
	if (*stack == NULL)
	{
		*stack = new_last;
	}
	else
	{
		current = *stack;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_last;
	}
}

/* assigns an index to the values, smallest index to smallest number */
void	assign_index_values(t_stack **stack)
{
	t_stack *tmp;
	int		*array;
	int		size;

	size = (*stack)->size;
	array = stack_to_array(stack);
	tmp = *stack; /* or (*stack)->next if it doesn't work */
	while (tmp)
	{
		tmp->num = get_index(array, tmp->num, size);
		tmp = tmp->next; /* update the list */
	}
	free (array); /* check if it's allowed */
}

/* fills the stack with the values parsed from the input string */
void	fill_stack_values(t_stack **stack, char **av)
{
	int		i;
	long	value;

	i = 1;
	while (av[i])
	{
		value = ft_atol(av[i]);
		if (value > 2147483648 || value < -2147483648)
			error_msg();
		push_to_stack(stack, value);
		i++;
	}
}

/* fills the stack with the input array */ 
void	**fill_stack(t_stack **stack, char **av)
{
	fill_stack_values(stack, *av);
	assign_index_values(stack);
}
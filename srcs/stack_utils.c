/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afloris <afloris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 15:50:02 by babyf             #+#    #+#             */
/*   Updated: 2025/10/24 15:38:21 by afloris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/* gets the index of a certain value and returns it if it's found.
if it's not found, returns -1*/
int	get_index(int *array, int value, int size)
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
	t_stack	*new_node;
	t_stack	*current;

	new_node = (t_stack *)malloc(sizeof(t_stack));
	if (!new_node)
		return ;
	new_node->num = value;
	new_node->next = NULL;
	new_node->size = 1;
	if (!(*stack))
	{
		*stack = new_node;
		new_node->size = 1;
		return ;
	}
	current = *stack;
	while (current->next != NULL)
		current = current->next;
	current->next = new_node;
	(*stack)->size += 1;
}

/* assigns an index to the values, smallest index to smallest number */
void	assign_index_values(t_stack **stack)
{
	int		*array;
	int		size;
	t_stack	*tmp;

	size = stack_size(stack);
	array = stack_to_array(stack);
	bubble_sort(array, size);
	tmp = *stack;
	while (tmp)
	{
		tmp->num = get_index(array, tmp->num, size);
		tmp = tmp->next;
	}
	free (array);
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
		if (value > 2147483647 || value < -2147483648)
			error_msg();
		push_to_stack(stack, value);
		i++;
	}
}

/* fills the stack with the input array */
void	**fill_stack(t_stack **stack, char **av)
{
	fill_stack_values(stack, av);
	assign_index_values(stack);
	return (0);
}

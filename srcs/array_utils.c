/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babyf <babyf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 16:35:16 by babyf             #+#    #+#             */
/*   Updated: 2025/09/02 10:13:57 by babyf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/* bubblesort algorithm function */
void	bubble_sort(int *array, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (array[i] > array[j])
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

/* moves the input string into stack a 
maybe it can be done with a costum version of str_cpy */
int	*stack_to_array(t_stack **a)
{
	int		i;
	int		*array;
	t_stack	*current;

	array = (int *)malloc(sizeof(int) * (*a)->size);
	if (!array)
		return (NULL);
	i = 0;
	current = *a; /* or (*a)->next if it doesn't work */
	while (current)
	{
		/* copying the numbers from array to stack */
		array[i] = current->num;
		current = current->next;
		i++;
	}
	return (array);
}

void	fill_stack_string(t_stack **a, char *arg)
{
	char	**args;
	int		i;

	args = ft_split(arg, ' ');
	if (!args)
		return ;
	i = 0;
	while (args[i])
	{
		push_to_stack(a, ft_atoi(args[i]));
		free (args[i]);
		i++;
	}
	free (args);
	assign_index_values(a);
}
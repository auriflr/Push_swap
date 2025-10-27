/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afloris <afloris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 16:35:16 by babyf             #+#    #+#             */
/*   Updated: 2025/10/27 15:36:31 by afloris          ###   ########.fr       */
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

/* moves the input string into stack a */
int	*stack_to_array(t_stack **a)
{
	int		i;
	int		size;
	int		*array;
	t_stack	*current;

	size = stack_size(a);
	array = (int *)malloc(sizeof(int) * size);
	if (!array)
		return (NULL);
	i = 0;
	current = *a;
	while (current && i < size)
	{
		array[i++] = current->num;
		current = current->next;
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babyf <babyf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 15:42:46 by babyf             #+#    #+#             */
/*   Updated: 2025/08/25 17:05:53 by babyf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

// find the min index inside the stack 
int		find_minindex(t_stack *a)
{
	int		min_index;
	int		min_value;
	int		i;
	t_stack	*curr_node;

	if (!a || !a->next)
		return (-1); 
	// error handling: -1
	min_value = a->next->num;
	curr_node = a->next;
	i = 0;
	min_index = 0;
	while (curr_node)
	{
		if (curr_node->num < min_value) //look for the min_value
		{
			min_value = curr_node->num; //if a lower number is found, switch min_value, with the number found
			min_index = i; //and min_index with i
		}
		curr_node = curr_node->next; // update the list
		i++;
	}
	return (min_index);
}

void	min_to_top(t_stack *a, int min)
{
	int		size;

	if (min == -1)
		return ;
	size = a->size;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babyf <babyf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 14:53:53 by babyf             #+#    #+#             */
/*   Updated: 2025/09/09 14:59:53 by babyf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/* Finds the target index, which is the index of a num
that falls between min and max (not strictly mid)*/
static int	find_target_index(t_stack **a, int min, int max)
{
	int		index;
	t_stack	*current;

	index = 0;
	current = *a; /* or (*a)->next if something goes wrong*/
	while (current)
	{
		if (current->num >= min && current->num <= max)
			return (index);
		index++;
		current = current->next;
	}
	return (-1);
}

/* gready algorithm has if conditions that are execute only when necessary
optimization of the sorting.*/
/* Brings the target index to the top with the least amount (less costly) moves*/ 
static void	greedy_ra(t_stack **a, int index)
{
	if (index == -1)
		return ;
	if (index <= (*a)->size / 2)
	{
		while (index-- > 0)
			rotate(a, 0);
	}
	else
	{
		index = (*a)->size - index;
		while (index-- > 0)
			rev_rotate (a, 0);
	}
}

/* Pushes the elements with range of min, max from A to B with 
a greedy rotation strategy that aims to use the least amount of moves */
static void chunk_push_b(t_stack **a, t_stack **b, int min, int max)
{
	int	mid;
	int	moves; /* counter for the moves */
	int	start_size;
	int	target_index;

	moves = 0;
	mid = (min + max) / 2;
	start_size = (*a)->size;
	target_index = find_target_index(a, min, max);
	while (target_index != -1 && moves < start_size)
	{
		target_index = find_target_index(a, min, max);
		greedy_ra(a, target_index);
		if ((*a)->num >= min && (*a)->num <= max) /* not sure about the conditions */
		{
			push(a, b, 1);
			moves++;
			if ((*b)->size > 1 && (*b)->num < mid)
				rotate(b, 1);
		}
		else
			moves++;
	}
}

/* Splits stack a into chunks, that are pushed to b using optimized push */
void	splitnpush(t_stack **a, t_stack **b, int chunks)
{
	int	min;
	int	max;
	int	size;
	int	chunk_size;
	int	current_chunk;

	size = (*a)->size;
	chunk_size = size / chunks;
	current_chunk = 0;
	while (current_chunk < chunks)
	{
		min = current_chunk * chunk_size;
		max = (current_chunk + 1) * chunk_size;
		if (current_chunk == chunks - 1)
			max = size;
		chunk_push_b(a, b, min, max);
		current_chunk++;
	}
}

/* executes radix_sort */
void	radix_sort(t_stack **a, t_stack **b, int chunks)
{
	int	size;

	size = (*a)->size;
	if (size > 300)
	{
		if (size > 500)
			chunks = 11;
		else
			chunks = 9;
	}
	splitnpush(a, b, chunks);
	b_to_a(a, b);
}
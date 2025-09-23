/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_helper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babyf <babyf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 16:10:31 by babyf             #+#    #+#             */
/*   Updated: 2025/09/23 19:39:08 by babyf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	stack_size(t_stack **stack)
{
	int		count;
	t_stack	*current;

	count = 0;
	if (!stack || !*stack)
		return (0);
	current = *stack;
	while (current)
	{
		count++;
		current = current->next;
	}
	return (count);
}

void	update_stack_size(t_stack **stack)
{
	int 	count;
	t_stack	*tmp;

	count = 0;
	tmp = (*stack)->next;
	while (tmp)
	{
		count++;
		tmp = tmp->next;
	}
	if (*stack)
		(*stack)->size = count;
}

void print_stack(t_stack **stack)
{
    t_stack *current;

    if (!stack || !(*stack))
    {
        ft_printf("Stack is empty\n");
        return;
    }

    current = *stack;
    ft_printf("Stack: ");
    while (current)
    {
        ft_printf("%d ", current->num);
        current = current->next;
    }
    ft_printf("\n");
}
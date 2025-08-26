/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babyf <babyf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 13:28:05 by babyf             #+#    #+#             */
/*   Updated: 2025/08/26 16:11:29 by babyf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_stack	*init_stack(void)
{
	t_stack		*stack;

	stack = (t_stack *)malloc(sizeof(t_stack));
	if (!stack)
		return ;
	stack->next = NULL;
	stack->size = 0;
	return (stack);
}

void	free_stack(t_stack *stack)
{
	t_stack		*tmp;

	if (!stack)
		return ;
	while (stack->next)
	{
		tmp = stack->next;
		stack->next = stack->next->next;
		free(tmp);
	}
	free (stack);
}

int		main(int ac, char **av)
{
	t_stack		*a;
	t_stack		*b;

	/*check validity of the args and if the array is sorted*/ 
	a = init_stack ();
	b = init_stack ();
	/*fill the stack with the args given
	execute the sorting*/
	free_stack(a);
	free_stack(b);
	return (0);
}
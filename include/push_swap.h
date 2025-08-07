/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babyf <babyf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 16:34:05 by afloris           #+#    #+#             */
/*   Updated: 2025/08/03 15:33:45 by babyf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define	PUSH_SWAP_H

#include "../include/libft.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

/*the stack of numbers.*/
typedef	struct 		s_node
{
	int				num;
	int				index;
	struct s_node	*next;
	struct s_node	*prev;
}					t_node;

/*keeps track of size and top node
list of different variables*/
typedef struct		s_stack
{
	int				size;
	t_node			*top; 
}					t_stack;

/*Operations and operation utils*/
void	push_a(t_stack *a, t_stack *b);
void	push_b(t_stack *a, t_stack *b);
void	rotate_a(t_stack *a);
void	rotate_b(t_stack *b);
void	rotate_r(t_stack *a, t_stack *b);
void	rrotate_a(t_stack *a);
void 	rrotate_b(t_stack *b);
void	rrotate_r(t_stack *a, t_stack *b);
void	swap_a(t_stack *a);
void	swap_b(t_stack *b);
void	swap_r(t_stack *a, t_stack *b);
int		pop(t_stack *stack);
void	push(t_stack *stack, int value);

#endif
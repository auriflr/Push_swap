/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babyf <babyf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 16:34:05 by afloris           #+#    #+#             */
/*   Updated: 2025/07/13 12:58:15 by babyf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define	PUSH_SWAP_H

#include "../include/libft.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

typedef	struct 		s_node
{
	int				num;
	struct s_node	*next;
}					t_node;

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
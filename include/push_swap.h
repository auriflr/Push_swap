/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babyf <babyf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 16:34:05 by afloris           #+#    #+#             */
/*   Updated: 2025/08/26 16:17:52 by babyf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define	PUSH_SWAP_H

#include "../Libft/lib/libft.h"
#include "../Libft/lib/ft_printf.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

/* remember that a stack is t_stack **stack, a node is t_stack *node
the first node of t_stack **stack is *stack */
typedef struct		s_stack
{
	int				num;
	int				size;
	struct s_stack	*next;
}					t_stack;

/* Operations and operation utils */
/* swap */ 
void	swap(t_stack **stack, int flag);
void	ss(t_stack *a, t_stack *b);
/* push */ 
void	push(t_stack **dst_stack, t_stack **src_stack, int flag);
/* rotate */ 
void	rotate(t_stack **stack, int flag);
void	rr(t_stack **a, t_stack **b);
/* reverse rotate */ 

/* Indexing */


/* Parsing */
void	skip_sign(const char *str, int *i, int *sign);
long	ft_atol(const char *str);
int		check_args(int ac, char **av);
int		check_dup(int ac, char **av);

/* Stack functions */
t_stack	*init_stack(void);
void	free_stack(t_stack *stack);

/* Stack to Array functions*/
void	push_to_stack(t_stack **stack, int value); 

#endif
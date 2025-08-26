/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babyf <babyf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 16:34:05 by afloris           #+#    #+#             */
/*   Updated: 2025/08/25 19:47:48 by babyf            ###   ########.fr       */
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

typedef struct		s_stack
{
	int				num;
	int				size;
	struct s_stack	*next;
	struct s_stack	*prev; 
}					t_stack;

/*Operations and operation utils*/
void	sa(t_stack *a);
void	sb(t_stack *b);
void	ss(t_stack *a, t_stack *b);
void	pa(t_stack *a, t_stack *b);
void	pb(t_stack *a, t_stack *b);
void	ra(t_stack *a);
void	rb(t_stack *b);
void	rr(t_stack *a, t_stack *b);
// reverse rotate functions
void	push(t_stack *stack, int value);
int		pop(t_stack *stack);

/*Indexing*/
int		find_minindex(t_stack *a);

/*Error handling in sorting and arguments*/
int		check_valid(int ac, char **av);
int		check_dup(int ac, char **av);

/*Stack functions*/
t_stack	*init_stack(void);
void	sort_three(t_stack *a);

#endif
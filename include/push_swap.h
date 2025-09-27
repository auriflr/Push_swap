/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babyf <babyf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 16:34:05 by afloris           #+#    #+#             */
/*   Updated: 2025/09/27 18:27:27 by babyf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define	PUSH_SWAP_H

#include "../libft/lib/libft.h"
#include "../libft/lib/ft_printf.h"
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
void	ss(t_stack **a, t_stack **b);

/* push */ 
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);
// void	push(t_stack **dst_stack, t_stack **src_stack, int flag);
void	b_to_a(t_stack **a, t_stack **b);

/* rotate */ 
// void	rotate(t_stack **stack, int flag);
void	ra (t_stack**a);
void 	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);

/* reverse rotate */ 
void	rev_rotate(t_stack **stack, int flag);
void	rrr(t_stack **a, t_stack **b);

/* Sorting small amounts of input numbers */
void	sort_three(t_stack **a);
void	sort_four(t_stack **a, t_stack **b);
void	sort_five(t_stack **a, t_stack **b);

/* Algorithm: Radix sort*/
void		bubble_sort(int *array, int size);
void		splitnpush(t_stack **a, t_stack **b, int chunks);
void		ft_radixsort(t_stack **a, t_stack **b, int chunks);
void		sort_stacks(t_stack **a, t_stack **b);

/* Indexing */
int		get_index(int *array, int value, int size);
int		find_minindex(t_stack **a);
int		find_maxindex(t_stack **b);
void	min_to_top(t_stack **a, int min_index);
void	max_to_top(t_stack **b, int max_index);

/* Parsing  and Error handling */
void	error_msg(void);
void	skip_sign(const char *str, int *i, int *sign);
long	ft_atol(const char *str);
int		check_args(int ac, char **av);
int		check_string(char *arg); 
int		check_dup(int ac, char **av);
int		check_sorted(int ac, char **av);
int		final_check(int ac, char **av);
int		is_sorted(t_stack **stack);
int		is_valid(int ac, char **av);

/* Stack utilitary functions */
t_stack	**init_stack(void);
void	update_stack_size(t_stack **stack);
void	free_stack(t_stack **stack);
void	push_to_stack(t_stack **stack, int value);
void	assign_index_values(t_stack **stack);
void	fill_stack_values(t_stack **stack, char **av);
void	fill_stack_string(t_stack **a, char *arg);
void 	print_stack(t_stack **stack);
int		*stack_to_array(t_stack **a);
int		stack_size(t_stack **stack);

#endif
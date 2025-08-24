/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babyf <babyf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 16:34:05 by afloris           #+#    #+#             */
/*   Updated: 2025/08/24 18:11:26 by babyf            ###   ########.fr       */
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

/*keeps track of size and top node
list of different variables*/
typedef struct		s_stack
{
	int				num;
	struct s_stack	*next;
	struct s_stack	*prev; 
}					t_stack;

/*Operations and operation utils*/
void	sa(t_stack *a);
void	sb(t_stack *b);
void	ss(t_stack *a, t_stack *b);

#endif
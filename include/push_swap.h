/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afloris <afloris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 16:34:05 by afloris           #+#    #+#             */
/*   Updated: 2025/07/12 15:21:50 by afloris          ###   ########.fr       */
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


#endif
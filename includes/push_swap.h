/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 23:56:44 by brda-sil          #+#    #+#             */
/*   Updated: 2022/05/25 23:03:53 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/* ########################################################################## */
/* INCLUDE */
/* ####### */

# include "ft_printf.h"
# include "libft.h"
# include "get_next_line.h"
# include <limits.h>

/* ########################################################################## */

/* ########################################################################## */
/* STRUCT */
/* ###### */

typedef struct s_stack
{
	struct s_stack	*next;
	struct s_stack	*prev;
	int				value;
	int				index;
}				t_stack;

/* ########################################################################## */

/* ########################################################################## */
/* FILES */
/* ##### */

// parse.c
t_stack	*parse_multiple_string(char **argv, int argc);
t_stack	*parse_one_string(char *argv);
t_stack	*parse(int argc, char **argv);

// parse_check.c
int	parse_check_string_part2(char **tmp_list, int number_arg, int *number);
int	parse_check_one_string(char *argv);
int	parse_check_multiple_string(char **argv, int argc);

// push_swap.c

// stack_free.c
void	stack_free(t_stack *s);

// stack_utils.c
t_stack	*stack_new(int content, int index);
void	stack_push_top(t_stack *s, int value);
void	stack_arrange_index(t_stack *s);
t_stack	*stack_push_bottom(t_stack *s, int value);

/* ########################################################################## */

#endif

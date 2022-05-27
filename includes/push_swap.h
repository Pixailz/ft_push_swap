/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 23:56:44 by brda-sil          #+#    #+#             */
/*   Updated: 2022/05/27 01:25:30 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/* ########################################################################## */
/* INCLUDE */
/* ####### */

# include "ft_printf.h"
# include "libft.h"
# include <stdlib.h>

/* ########################################################################## */

/* ########################################################################## */
/* DEFINE */
/* ####### */

# define MAX_INT 2147483647
# define MIN_INT -2147483648

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

typedef struct s_push_swap
{
	t_stack	*a;
	t_stack	*b;
}				t_push_swap;

/* ########################################################################## */

/* ########################################################################## */
/* FILES */
/* ##### */

// ope/pa.c
void	pa(t_push_swap *ps);

// ope/pb.c
void	pb(t_push_swap *ps);

// ope/ra.c
void	ra(t_push_swap *ps);

// ope/rb.c
void	rb(t_push_swap *ps);

// ope/rra.c
void	rra(t_push_swap *ps);

// ope/rrb.c
void	rrb(t_push_swap *ps);

// ope/rr.c
void	rr(t_push_swap *ps);

// ope/rrr.c
void	rrr(t_push_swap *ps);

// ope/sa.c
void	sa(t_push_swap *ps);

// ope/sb.c
void	sb(t_push_swap *ps);

// ope/ss.c
void	ss(t_push_swap *ps);

// parse.c
t_stack	*parse_multiple_string(char **argv, int argc);
t_stack	*parse_one_string(char *argv);
t_stack	*parse(int argc, char **argv);

// parse_check.c
int		parse_check_is_str_numeric(const char *str);
int		parse_check_string_part2(char **tmp_list, int number_arg, \
															long int *number);
int		parse_check_one_string(char *argv);
int		parse_check_multiple_string(char **argv, int argc);

// push_swap.c
int		main(int argc, char **argv);

// stack_free.c
void	stack_free(t_stack *s);
void	free_entry_point(t_push_swap *ps);

// stack_utils.c
t_stack	*stack_new(int content, int index);
void	stack_push_top(t_stack *s, int value);
void	stack_arrange_index(t_stack *s);
t_stack	*stack_push_bottom(t_stack *s, int value);

/* ########################################################################## */

#endif

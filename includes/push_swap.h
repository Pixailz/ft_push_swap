/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 23:56:44 by brda-sil          #+#    #+#             */
/*   Updated: 2022/06/10 18:12:34 by brda-sil         ###   ########.fr       */
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
/* ###### */

# ifndef DEBUG
#  define DEBUG 0
# endif

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
	int		length_a;
	int		length_b;
	int		most_significant_index;
}				t_push_swap;

/* ########################################################################## */

/* ########################################################################## */
/* FILES */
/* ##### */

// algo/algo_100.c
void		algo_100(t_push_swap *ps);
int			algo_100_check(t_stack *s, int median);
void		algo_100_push_median(t_push_swap *ps, int median);
void		algo_100_sort_25(t_push_swap *ps, int min, int max);
void		pb_less_significant_bewteen(t_push_swap *ps, int median);

// algo/algo_10.c
void		algo_10(t_push_swap *ps);

// algo/algo_2.c
void		algo_2(t_push_swap *ps);

// algo/algo_3.c
void		algo_3(t_push_swap *ps);
void		algo_3_part2(t_push_swap *ps);

// algo/algo_4.c
void		algo_4(t_push_swap *ps);

// algo/algo_5.c
void		algo_5(t_push_swap *ps);

// algo/algo_utils.2.c
void		pa_all_b(t_push_swap *ps);
void		pb_less_significant(t_push_swap *ps, int to_push);
void		pb_most_significant(t_push_swap *ps, int to_push);

// algo/algo_utils.c
int			is_r_sorted(t_stack *s, int size);
int			is_sorted(t_stack *s);
int			is_sorted_not_good_a(t_push_swap *ps);
int			is_sorted_not_good_a_check(int value, int next_value);

// init/init.c
void		init(t_push_swap *ps, int argc, char **argv);

// init/init_get_significant.c
int			get_less_significant_index(t_stack *s);
int			get_less_significant_value(t_stack *s);
int			get_most_significant_index(t_stack *s);
int			get_most_significant_value(t_stack *s);

// ope/pa.c
void		pa(t_push_swap *ps);
void		post_pa(t_push_swap *ps);

// ope/pb.c
void		pb(t_push_swap *ps);
void		post_pb(t_push_swap *ps);

// ope/ra.c
void		post_ra(t_push_swap *ps);
void		ra(t_push_swap *ps, int is_rr);

// ope/rb.c
void		post_rb(t_push_swap *ps);
void		rb(t_push_swap *ps, int is_rr);

// ope/rra.c
void		post_rra(t_push_swap *ps);
void		rra(t_push_swap *ps, int is_rrr);

// ope/rrb.c
void		post_rrb(t_push_swap *ps);
void		rrb(t_push_swap *ps, int is_rrr);

// ope/rr.c
void		rr(t_push_swap *ps);

// ope/rrr.c
void		rrr(t_push_swap *ps);

// ope/sa.c
void		post_sa(t_push_swap *ps);
void		sa(t_push_swap *ps, int is_ss);

// ope/sb.c
void		post_sb(t_push_swap *ps);
void		sb(t_push_swap *ps, int is_ss);

// ope/ss.c
void		ss(t_push_swap *ps);

// parsing/parse.c
void		parse(t_stack **a, int argc, char **argv);
void		parse_multiple_string(t_stack **a, char **argv, int argc);
void		parse_one_string(t_stack **a, char *argv);

// parsing/parse_check.2.c
int			parse_check_multiple_string_part2(char **tmp_list, int number_arg, \
long int *number);
int			parse_check_one_string_part2(char **tmp_list, int number_arg, \
long int *number);

// parsing/parse_check.c
int			parse_check_is_str_numeric(const char *str);
long int	parse_check_multiple_is_good_number(char **tmp_list, int i, \
long int *number);
int			parse_check_multiple_string(char **argv, int argc);
long int	parse_check_one_is_good_number(char **tmp_list, int i, \
long int *number);
int			parse_check_one_string(char *argv);

// pre_compute/algo_pre_sort.c
void		arrange_index(t_push_swap *ps, int *list);
int			*get_list(t_stack *s, int length);
int			*get_sorted_list(t_stack *s, int length);
void		pre_compute(t_push_swap *ps);

// push_swap.c
void		choose_algo(t_push_swap *ps);
int			main(int argc, char **argv);

// stack/stack_free.c
void		free_entry_point(t_push_swap *ps);
void		stack_free(t_stack *s);

// stack/stack_utils.2.c
void		stack_reverse_rotate(t_stack **s);
void		stack_rotate(t_stack **s);
void		stack_swap_top(t_stack **s);

// stack/stack_utils.3.c
int			stack_get_size(t_stack *s);
void		stack_view(t_push_swap *ps);
void		stack_view_a(t_push_swap *ps);
void		stack_view_b(t_push_swap *ps);

// stack/stack_utils.4.c
int			get_index_at_bottom(t_stack *s);
int			get_pos_at_index(t_stack *s, int index);
int			stack_get_value_at_bottom(t_stack *s);
int			stack_get_value_before_bottom(t_stack *s);

// stack/stack_utils.c
void		stack_get_new(t_stack **s, int value, int index);
void		stack_pop_bottom(t_stack **s);
void		stack_pop_top(t_stack **s);
void		stack_push_bottom(t_stack **s, int value, int index);
void		stack_push_top(t_stack **s, int value, int index);

/* ########################################################################## */

#endif

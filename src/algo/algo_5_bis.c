/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_5_bis.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 17:18:14 by brda-sil          #+#    #+#             */
/*   Updated: 2022/06/02 18:49:02 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_stack_5_bis(t_push_swap *ps, int *less_significant_index)
{
	if (*less_significant_index + 1 > (ps->length_a / 2))
		ra(ps, 0);
	else
		rra(ps, 0);
	*less_significant_index = get_less_significant_index(ps->a);
}

void	algo_5_bis_sort_sorted_not_good(t_push_swap *ps)
{
	int		less_significant_index;

	less_significant_index = get_less_significant_index(ps->a);
	while (!is_sorted(ps->a))
	{
		if (less_significant_index + 1 > (ps->length_a / 2))
			ra(ps, 0);
		else
			rra(ps, 0);
	}
}

void	algo_5_finish(t_push_swap *ps)
{
	while (ps->is_stack_b_empty)
		pa(ps);
}

void	algo_5_bis(t_push_swap *ps)
{
	int		less_significant;
	int		less_significant_index;

	if (is_sorted_not_good_a(ps))
		algo_5_bis_sort_sorted_not_good(ps);
	less_significant = get_less_significant_value(ps->a);
	less_significant_index = get_less_significant_index(ps->a);
	while (ps->a)
	{
		if (is_sorted_not_good_a(ps) && is_r_sorted(ps->b))
			algo_5_finish(ps);
		if (is_sorted(ps->a))
			break ;
		if (stack_get_value_at_top(ps->a) == less_significant)
		{
			pb(ps);
			if (ps->is_stack_a_empty)
				break ;
			less_significant = get_less_significant_value(ps->a);
		}
		else
			move_stack_5_bis(ps, &less_significant_index);
	}
	while (!ps->is_stack_b_empty)
		pa(ps);
}

/*
./checker_linux 5 4 3 2 1
rra
pb
rra
pb
rra
pb
sa
pa
pa
pa
OK
*/
/*
5                                 5         '
2   2   3   4                  4  4         '
3   3   4   1  1   3   3  3 3  3  3         '
4   4   1   2  24  14 14 24 24 2  2         '
1   15  25  35 35  25 25 15 15 15 1         '
AB  AB  AB  AB AB  AB Ab AB AB AB AB        '
pb  ra  ra  pb rra pb sa pa pa pa           '
*/

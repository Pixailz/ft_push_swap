/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pix <pix@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 17:18:14 by brda-sil          #+#    #+#             */
/*   Updated: 2022/06/04 15:00:14 by pix              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_stack_5(t_push_swap *ps, int less_significant_index)
{
	if (less_significant_index > (ps->length_a / 2))
		ra(ps, 0);
	else
		rra(ps, 0);
}

void	pb_less_significant(t_push_swap *ps)
{
	int		less_significant;

	less_significant = get_less_significant_index(ps->a);
	while (get_index_at_top(ps->a) != less_significant)
		move_stack_5(ps, get_pos_at_index(ps->a, less_significant));
	pb(ps);
	less_significant = get_less_significant_index(ps->a);
	while (get_index_at_top(ps->a) != less_significant)
		move_stack_5(ps, get_pos_at_index(ps->a, less_significant));
	pb(ps);
}

void	sort_3_last(t_push_swap *ps)
{
	if (!is_sorted(ps->a))
	{
		if (ps->a->index == 2)
		{
			if (ps->a->next->index == 0)
				rra(ps, 0);
			else
			{
				sa(ps, 0);
				rra(ps, 0);
			}
		}
		else if (ps->a->index == 1)
		{
			if (ps->a->next->index == 2)
				ra(ps, 0);
			else
			{
				rra(ps, 0);
				sa(ps, 0);
			}
		}
		else
			sa(ps, 0);
	}
}

void	algo_5(t_push_swap *ps)
{
	if (!is_sorted(ps->a))
	{
		pb_less_significant(ps);
		sort_3_last(ps);
		while (ps->length_b)
			pa(ps);
	}
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

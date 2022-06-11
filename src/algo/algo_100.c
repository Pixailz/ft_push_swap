/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_100.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 10:20:18 by brda-sil          #+#    #+#             */
/*   Updated: 2022/06/11 02:04:18 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	algo_100_sort_25(t_push_swap *ps, int min, int max)
{
	int	pos;

	while (ps->b && max >= min)
	{
		pos = get_pos_at_index(ps->b, min);
		if (ps->b->index == min)
		{
			pa(ps);
			min++;
		}
		else if (ps->b->next && ps->b->next->index == min)
		{
			sb(ps, 0);
		}
		else if (pos - 1 > (ps->length_b / 2))
			rrb(ps, 0);
		else
			rb(ps, 0);
	}
}

int	algo_100_check(t_stack *s, int median)
{
	while (s)
	{
		if (!median && s->index <= 25)
			return (1);
		else if (median == 1 && s->index > 25 && s->index <= 50)
			return (1);
		else if (median == 2 && s->index > 50 && s->index <= 75)
			return (1);
		else if (median == 3 && s->index > 75 && s->index <= 100)
			return (1);
		s = s->next;
	}
	return (0);
}

void	algo_100_push_median(t_push_swap *ps, int median)
{
	while (algo_100_check(ps->a, median))
	{
		if (!median && ps->a->index <= 25)
			pb(ps);
		else if (median == 1 && ps->a->index > 25 && ps->a->index <= 50)
			pb(ps);
		else if (median == 2 && ps->a->index > 50 && ps->a->index <= 75)
			pb(ps);
		else if (median == 3 && ps->a->index > 75 && ps->a->index <= 100)
			pb(ps);
		else
			ra(ps, 0);
	}
}

void	algo_100(t_push_swap *ps)
{
	if (!is_sorted(ps->a))
	{
		algo_100_push_median(ps, 0);
		algo_100_sort_25(ps, 0, 25);
		algo_100_push_median(ps, 1);
		algo_100_sort_25(ps, 26, 50);
		algo_100_push_median(ps, 2);
		algo_100_sort_25(ps, 51, 75);
		algo_100_push_median(ps, 3);
		algo_100_sort_25(ps, 76, 99);
	}
}

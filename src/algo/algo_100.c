/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_100.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 10:20:18 by brda-sil          #+#    #+#             */
/*   Updated: 2022/06/08 19:50:28 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb_less_significant_bewteen(t_push_swap *ps, int median)
{
	int	min;
	int	less_significant;

	min = median - 25;
	while (min < median)
	{
		less_significant = min;
		while (get_index_at_top(ps->a) != less_significant)
			move_stack(ps, get_pos_at_index(ps->a, less_significant));
		pb(ps);
		min++;
	}
}

void	algo_100_sort_25(int median, t_push_swap *ps)
{
	int	min;
	int	max;
	int	pos;

	min = median * 25;
	max = min + 25;
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
		else if (pos >= 10)
			rrb(ps, 0);
		else
			rb(ps, 0);
	}
}

void	algo_100_post(t_push_swap *ps)
{
	while (ps->length_b)
		pa(ps);
}

void	algo_100(t_push_swap *ps)
{
	pb_less_significant_bewteen(ps, 25);
	stack_view(ps);
	algo_100_post(ps);
	stack_view(ps);
	//algo_100_sort_25(0, ps);
	pb_less_significant_bewteen(ps, 50);
	stack_view(ps);
	algo_100_post(ps);
	stack_view(ps);
	//algo_100_sort_25(1, ps);
	pb_less_significant_bewteen(ps, 75);
	stack_view(ps);
	algo_100_post(ps);
	stack_view(ps);
	//algo_100_sort_25(2, ps);
	pb_less_significant_bewteen(ps, 100);
	stack_view(ps);
	algo_100_post(ps);
	stack_view(ps);
	//algo_100_sort_25(3, ps);
}

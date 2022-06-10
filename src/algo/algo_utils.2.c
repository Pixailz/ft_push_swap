/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_utils.2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 23:43:25 by brda-sil          #+#    #+#             */
/*   Updated: 2022/06/10 18:03:40 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb_most_significant(t_push_swap *ps, int to_push)
{
	int	index;
	int	most_significant;
	int	most_significant_pos;

	index = 0;
	while (index < to_push)
	{
		most_significant = get_most_significant_index(ps->a);
		while (ps->a->index != most_significant)
		{
			most_significant_pos = get_pos_at_index(ps->a, most_significant);
			if (most_significant_pos - 1 <= (ps->length_a / 2))
				ra(ps, 0);
			else
				rra(ps, 0);
		}
		pb(ps);
		index++;
	}
}

void	pb_less_significant(t_push_swap *ps, int to_push)
{
	int	index;
	int	less_significant;
	int	less_significant_pos;

	index = 0;
	while (index < to_push)
	{
		less_significant = get_less_significant_index(ps->a);
		while (ps->a->index != less_significant)
		{
			less_significant_pos = get_pos_at_index(ps->a, less_significant);
			if (less_significant_pos - 1 <= (ps->length_a / 2))
				ra(ps, 0);
			else
				rra(ps, 0);
		}
		pb(ps);
		index++;
	}
}

void	pa_all_b(t_push_swap *ps)
{
	while (ps->length_b)
		pa(ps);
}

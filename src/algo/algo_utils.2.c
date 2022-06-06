/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_utils.2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 23:43:25 by brda-sil          #+#    #+#             */
/*   Updated: 2022/06/06 11:02:47 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted_not_good_a_check(int value, int next_value)
{
	if (value - 1 == next_value)
		if (value > next_value)
			return (1);
	return (0);
}

int	is_sorted_not_good_a(t_push_swap *ps)
{
	t_stack	*tmp;
	int		less_significant_value;
	int		most_significant_value;

	tmp = ps->a;
	less_significant_value = get_less_significant_value(ps->a);
	most_significant_value = get_most_significant_value(ps->a);
	while (tmp->next)
	{
		if (!(tmp->value == less_significant_value && \
			tmp->next->value == most_significant_value))
			if (!is_sorted_not_good_a_check(tmp->value, tmp->next->value))
				return (0);
		tmp = tmp->next;
	}
	return (1);
}

void	move_stack(t_push_swap *ps, int less_significant_index)
{
	if (less_significant_index > (ps->length_a / 2))
		ra(ps, 0);
	else
		rra(ps, 0);
}

void	pb_less_significant(t_push_swap *ps, int to_push)
{
	int	index;
	int	less_significant;

	index = 0;
	while (index < to_push)
	{
		less_significant = get_less_significant_index(ps->a);
		while (get_index_at_top(ps->a) != less_significant)
			move_stack(ps, get_pos_at_index(ps->a, less_significant));
		pb(ps);
		index++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 16:26:34 by brda-sil          #+#    #+#             */
/*   Updated: 2022/06/11 09:50:02 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stack *s)
{
	t_stack	*tmp;

	tmp = s;
	while (tmp->next)
	{
		if (tmp->index < tmp->next->index)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

int	is_r_sorted(t_stack *s)
{
	t_stack	*tmp;

	tmp = s;
	while (tmp->next)
	{
		if (tmp->index > tmp->next->index)
			return (1);
		tmp = tmp->next;
	}
	return (0);
}

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

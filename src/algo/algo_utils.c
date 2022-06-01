/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 16:26:34 by brda-sil          #+#    #+#             */
/*   Updated: 2022/06/01 01:27:41 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted_a(t_push_swap *ps)
{
	t_stack	*tmp;

	tmp = ps->a;
	if (!ps->is_stack_a_empty)
	{
		while (tmp->next)
		{
			if (tmp->value < tmp->next->value)
				return (0);
			tmp = tmp->next;
		}
		return (1);
	}
	else
		return (0);
}

int	is_r_sorted_b(t_push_swap *ps)
{
	t_stack	*tmp;

	tmp = ps->b;
	if (!ps->is_stack_b_empty)
	{
		while (tmp->next)
		{
			if (tmp->value > tmp->next->value)
				return (0);
			tmp = tmp->next;
		}
		return (1);
	}
	else
		return (0);
}

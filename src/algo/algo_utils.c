/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 16:26:34 by brda-sil          #+#    #+#             */
/*   Updated: 2022/05/31 17:19:26 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_push_swap *ps)
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

int	get_less_significant(t_stack *s)
{
	t_stack	*tmp;
	int		saved_number;

	tmp = s;
	saved_number = tmp->value;
	while (tmp->next)
	{
		if (tmp->next->value > saved_number)
			saved_number = tmp->next->value;
		tmp = tmp->next;
	}
	return (saved_number);
}

int	get_most_significant(t_stack *s)
{
	t_stack	*tmp;
	int		saved_number;

	tmp = s;
	saved_number = tmp->value;
	while (tmp->next)
	{
		if (tmp->next->value < saved_number)
			saved_number = tmp->next->value;
		tmp = tmp->next;
	}
	return (saved_number);
}

int	get_most_significant_index(t_stack *s)
{
	t_stack	*tmp;
	int		saved_index;
	int		saved_number;

	tmp = s;
	saved_number = tmp->value;
	saved_index = tmp->index;
	while (tmp->next)
	{
		if (tmp->next->value < saved_number)
		{
			saved_index = tmp->next->index;
			saved_number = tmp->next->value;
		}
		tmp = tmp->next;
	}
	return (saved_index);
}

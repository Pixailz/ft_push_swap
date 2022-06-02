/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_pre_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 13:31:45 by brda-sil          #+#    #+#             */
/*   Updated: 2022/06/02 20:17:03 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pre_sa(t_stack *s)
{
	t_stack	*tmp1;
	t_stack	*tmp2;

	if (stack_get_size(s) < 2)
		return ;
	tmp1 = s;
	while (tmp1->next)
	{
		tmp2 = tmp1;
		tmp1 = tmp1->next;
	}
	tmp2->value ^= tmp1->value;
	tmp1->value ^= tmp2->value;
	tmp2->value ^= tmp1->value;
}

void	pre_rra(t_stack *s)
{
	t_stack	*tmp1;
	int		tmp2;

	tmp1 = s;
	tmp2 = s->value;
	while (tmp1->next)
	{
		tmp1->value = tmp1->next->value;
		tmp1 = tmp1->next;
	}
	tmp1->value = tmp2;
}

void	pre_ra(t_stack *s)
{
	t_stack	*tmp;
	int		last_value;

	tmp = s;
	while (tmp->next)
		tmp = tmp->next;
	last_value = tmp->value;
	while (tmp->prev)
	{
		tmp->value = tmp->prev->value;
		tmp = tmp->prev;
	}
	tmp->value = last_value;
}

t_stack	*algo_pre_compute(t_stack *s)
{
	t_stack	*tmp;

	tmp = s;
	while (!is_sorted(tmp))
	{
		if (stack_get_value_before_top(tmp) < stack_get_value_at_top(tmp))
		{
			pre_sa(tmp);
			if (!is_sorted(tmp))
				pre_rra(tmp);
		}
		else
			pre_ra(tmp);
	}
	return (tmp);
}

void	arrange_index_pre_compute(t_stack *s)
{
	t_stack	*tmp;
	int		i;

	tmp = s;
	i = 1;
	while (tmp)
	{
		ft_printf("tmp[%d]: %d\n", i, tmp->value);
		i++;
		tmp = tmp->next;
	}
}

void	pre_compute(t_push_swap *ps)
{
	t_stack	*tmp;

	tmp = algo_pre_compute(ps->a);
	arrange_index_pre_compute(tmp);
}

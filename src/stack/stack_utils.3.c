/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.3.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 18:20:40 by brda-sil          #+#    #+#             */
/*   Updated: 2022/05/29 16:04:30 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_get_value_at_top(t_stack *s)
{
	t_stack	*tmp;

	tmp = s;
	while (tmp->next)
		tmp = tmp->next;
	return (tmp->value);
}

int	stack_get_value_before_top(t_stack *s)
{
	t_stack	*tmp;
	int		last_value;

	tmp = s;
	while (tmp->next)
	{
		last_value = tmp->value;
		tmp = tmp->next;
	}
	return (last_value);
}

void	stack_pop_top_b(t_push_swap *ps)
{
	t_stack	*tmp;

	tmp = ps->b;
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	if (tmp == ps->b)
		ps->is_stack_b_empty = 1;
	if (tmp->index)
		tmp->prev->next = NULL;
	free(tmp);
}

void	stack_pop_top_a(t_push_swap *ps)
{
	t_stack	*tmp;

	tmp = ps->a;
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	if (tmp == ps->a)
		ps->is_stack_a_empty = 1;
	if (tmp->index)
		tmp->prev->next = NULL;
	free(tmp);
}

void	stack_arrange_index(t_stack *s)
{
	int		i;
	t_stack	*tmp;

	tmp = s;
	i = 0;
	while (tmp)
	{
		tmp->index = i;
		tmp = tmp->next;
		i++;
	}
}

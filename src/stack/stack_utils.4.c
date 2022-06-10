/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.4.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 14:24:49 by pix               #+#    #+#             */
/*   Updated: 2022/06/10 17:59:50 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_index_at_bottom(t_stack *s)
{
	t_stack	*tmp;

	tmp = s;
	while (tmp->next)
		tmp = tmp->next;
	return (tmp->index);
}

int	get_pos_at_index(t_stack *s, int index)
{
	t_stack	*tmp;
	int		pos;

	tmp = s;
	pos = 1;
	while (tmp->next && tmp->index != index)
	{
		tmp = tmp->next;
		pos++;
	}
	return (pos);
}

int	stack_get_value_at_bottom(t_stack *s)
{
	t_stack	*tmp;

	tmp = s;
	while (tmp->next)
		tmp = tmp->next;
	return (tmp->value);
}

int	stack_get_value_before_bottom(t_stack *s)
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

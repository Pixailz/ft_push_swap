/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.4.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pix <pix@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 14:24:49 by pix               #+#    #+#             */
/*   Updated: 2022/06/04 14:51:30 by pix              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_index_at_top(t_stack *s)
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

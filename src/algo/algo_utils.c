/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 16:26:34 by brda-sil          #+#    #+#             */
/*   Updated: 2022/06/04 10:40:15 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stack *s)
{
	t_stack	*tmp;

	tmp = s;
	while (tmp->next)
	{
		if (tmp->index > tmp->next->index)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

int	is_r_sorted(t_stack *s, int size)
{
	t_stack	*tmp;
	int		index;

	index = 0;
	tmp = s;
	if (!tmp)
	{
		while (index < size)
		{
			if (tmp->index < tmp->next->index)
				return (0);
			tmp = tmp->next;
		}
		return (1);
	}
	else
		return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 01:08:49 by brda-sil          #+#    #+#             */
/*   Updated: 2022/05/27 17:49:39 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_push_swap *ps)
{
	t_stack	*tmp;
	int		last_value;

	tmp = ps->a;
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

/*
s[0] -> 1
s[1] -> 2
s[2] -> 3
BECuM
s[0] -> 3
s[1] -> 1
s[2] -> 2
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 01:08:49 by brda-sil          #+#    #+#             */
/*   Updated: 2022/05/27 17:53:15 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_push_swap *ps)
{
	t_stack	*tmp1;
	int		tmp2;

	tmp1 = ps->a;
	tmp2 = ps->a->value;
	while (tmp1->next)
	{
		tmp1->value = tmp1->next->value;
		tmp1 = tmp1->next;
	}
	tmp1->value = tmp2;
}

/*
s[0] -> 1
s[1] -> 2
s[2] -> 3
BECuM
s[0] -> 2
s[1] -> 3
s[2] -> 1
*/

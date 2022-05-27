/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 01:08:49 by brda-sil          #+#    #+#             */
/*   Updated: 2022/05/27 03:45:04 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_push_swap *ps)
{
	t_stack	*tmp1;
	t_stack	*tmp2;

	if (stack_get_size(ps->a) < 2)
		return ;
	tmp1 = ps->a;
	while (tmp1->next)
	{
		tmp2 = tmp1;
		tmp1 = tmp1->next;
	}
	tmp2->prev->next = tmp1;
	tmp1->prev = tmp2->prev;
	tmp1->next = tmp2;
	tmp2->next = NULL;
	tmp2->prev = tmp1->prev->next;
	stack_arrange_index(ps->a);
}

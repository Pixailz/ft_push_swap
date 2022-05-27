/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 01:08:49 by brda-sil          #+#    #+#             */
/*   Updated: 2022/05/27 17:14:21 by brda-sil         ###   ########.fr       */
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
	tmp2->value ^= tmp1->value;
	tmp1->value ^= tmp2->value;
	tmp2->value ^= tmp1->value;
}

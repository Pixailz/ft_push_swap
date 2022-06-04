/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 01:08:49 by brda-sil          #+#    #+#             */
/*   Updated: 2022/06/04 00:00:44 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(t_push_swap *ps, int is_ss)
{
	t_stack	*tmp1;
	t_stack	*tmp2;
	int		index;

	if (ps->length_b < 2)
		return ;
	tmp1 = ps->b;
	index = 0;
	while (++index < ps->length_b)
	{
		tmp2 = tmp1;
		tmp1 = tmp1->next;
	}
	tmp2->value ^= tmp1->value;
	tmp1->value ^= tmp2->value;
	tmp2->value ^= tmp1->value;
	tmp2->index ^= tmp1->index;
	tmp1->index ^= tmp2->index;
	tmp2->index ^= tmp1->index;
	if (!is_ss)
		post_sb(ps);
}

void	post_sb(t_push_swap *ps)
{
	ft_printf("sb\n");
	if (DEBUG)
		stack_view(ps);
}

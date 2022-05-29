/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 01:08:49 by brda-sil          #+#    #+#             */
/*   Updated: 2022/05/29 16:39:23 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(t_push_swap *ps, int is_ss)
{
	t_stack	*tmp1;
	t_stack	*tmp2;

	if (ps->is_stack_b_empty || stack_get_size(ps->b) < 2)
		return ;
	tmp1 = ps->b;
	while (tmp1->next)
	{
		tmp2 = tmp1;
		tmp1 = tmp1->next;
	}
	tmp2->value ^= tmp1->value;
	tmp1->value ^= tmp2->value;
	tmp2->value ^= tmp1->value;
	if (!is_ss)
		post_sb(ps);
}

void	post_sb(t_push_swap *ps)
{
	ft_printf("sb\n");
	if (DEBUG)
		stack_view(ps);
}

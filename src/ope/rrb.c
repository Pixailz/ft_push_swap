/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrrb.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 01:08:49 by brda-sil          #+#    #+#             */
/*   Updated: 2022/05/29 17:05:20 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrb(t_push_swap *ps, int is_rr)
{
	t_stack	*tmp1;
	int		tmp2;

	tmp1 = ps->b;
	tmp2 = ps->b->value;
	while (tmp1->next)
	{
		tmp1->value = tmp1->next->value;
		tmp1 = tmp1->next;
	}
	tmp1->value = tmp2;
	if (!is_rr)
		post_rrb(ps);
}

void	post_rrb(t_push_swap *ps)
{
	ft_printf("rrb\n");
	if (DEBUG)
		stack_view(ps);
}

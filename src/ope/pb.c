/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 01:08:49 by brda-sil          #+#    #+#             */
/*   Updated: 2022/05/30 22:28:04 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_push_swap *ps)
{
	t_stack	*tmp1;
	t_stack	*tmp2;

	tmp1 = ps->a;
	tmp2 = ps->b;
	if (ps->is_stack_a_empty)
		return ;
	while (tmp1->next)
		tmp1 = tmp1->next;
	if (ps->is_stack_b_empty)
	{
		stack_new_b(tmp1->value, 0, ps);
		stack_pop_top_a(ps);
	}
	else
	{
		while (tmp2->next)
			tmp2 = tmp2->next;
		stack_push_top(ps->b, tmp1->value);
		stack_pop_top_a(ps);
	}
	post_pb(ps);
}

void	post_pb(t_push_swap *ps)
{
	ft_printf("pb\n");
	if (DEBUG)
		stack_view(ps);
	ps->length_a--;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 01:08:49 by brda-sil          #+#    #+#             */
/*   Updated: 2022/05/29 16:33:50 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_push_swap *ps)
{
	t_stack	*tmp1;
	t_stack	*tmp2;

	tmp1 = ps->b;
	tmp2 = ps->a;
	if (ps->is_stack_b_empty)
		return ;
	while (tmp1->next)
		tmp1 = tmp1->next;
	if (ps->is_stack_a_empty)
	{
		stack_new_a(tmp1->value, 0, ps);
		stack_pop_top_b(ps);
	}
	else
	{
		while (tmp2->next)
			tmp2 = tmp2->next;
		stack_push_top(ps->a, tmp1->value);
		stack_pop_top_b(ps);
	}
	post_pa(ps);
}

void	post_pa(t_push_swap *ps)
{
	ft_printf("pa\n");
	if (DEBUG)
		stack_view(ps);
}

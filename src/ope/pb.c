/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:46:53 by brda-sil          #+#    #+#             */
/*   Updated: 2022/06/10 15:32:02 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_push_swap *ps)
{
	if (ps->length_a < 1)
		return ;
	if (!ps->length_b)
		stack_get_new(&ps->b, ps->a->value, ps->a->index);
	else
		stack_push_top(&ps->b, ps->a->value, ps->a->index);
	stack_pop_top(&ps->a);
	ps->length_b++;
	ps->length_a--;
	post_pb(ps);
}

void	post_pb(t_push_swap *ps)
{
	ft_printf("pb\n");
	if (DEBUG)
		stack_view(ps);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 14:46:53 by brda-sil          #+#    #+#             */
/*   Updated: 2022/06/10 15:31:56 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_push_swap *ps)
{
	if (ps->length_b < 1)
		return ;
	if (!ps->length_a)
		stack_get_new(&ps->a, ps->b->value, ps->b->index);
	else
		stack_push_top(&ps->a, ps->b->value, ps->b->index);
	stack_pop_top(&ps->b);
	ps->length_a++;
	ps->length_b--;
	post_pa(ps);
}

void	post_pa(t_push_swap *ps)
{
	ft_printf("pa\n");
	if (DEBUG)
		stack_view(ps);
}

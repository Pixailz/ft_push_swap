/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 01:08:49 by brda-sil          #+#    #+#             */
/*   Updated: 2022/06/10 14:40:09 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrb(t_push_swap *ps, int is_rrr)
{
	stack_reverse_rotate(&ps->b);
	if (!is_rrr)
		post_rrb(ps);
}

void	post_rrb(t_push_swap *ps)
{
	ft_printf("rrb\n");
	if (DEBUG)
		stack_view(ps);
}

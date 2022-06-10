/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 01:08:49 by brda-sil          #+#    #+#             */
/*   Updated: 2022/06/10 14:40:12 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_push_swap *ps, int is_rrr)
{
	stack_reverse_rotate(&ps->a);
	if (!is_rrr)
		post_rra(ps);
}

void	post_rra(t_push_swap *ps)
{
	ft_printf("rra\n");
	if (DEBUG)
		stack_view(ps);
}

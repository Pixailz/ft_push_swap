/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 01:08:49 by brda-sil          #+#    #+#             */
/*   Updated: 2022/06/10 15:32:51 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(t_push_swap *ps, int is_ss)
{
	if (ps->length_b < 2)
		return ;
	stack_swap_top(&ps->b);
	if (!is_ss)
		post_sb(ps);
}

void	post_sb(t_push_swap *ps)
{
	ft_printf("sb\n");
	if (DEBUG)
		stack_view(ps);
}

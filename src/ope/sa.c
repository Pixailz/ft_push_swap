/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 01:08:49 by brda-sil          #+#    #+#             */
/*   Updated: 2022/06/10 15:32:36 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_push_swap *ps, int is_ss)
{
	if (ps->length_a < 2)
		return ;
	stack_swap_top(&ps->a);
	if (!is_ss)
		post_sa(ps);
}

void	post_sa(t_push_swap *ps)
{
	ft_printf("sa\n");
	if (DEBUG)
		stack_view(ps);
}

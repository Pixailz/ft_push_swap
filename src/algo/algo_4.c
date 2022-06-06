/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 20:00:11 by pix               #+#    #+#             */
/*   Updated: 2022/06/06 11:02:01 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_2_last(t_push_swap *ps)
{
	if (ps->a->index == 1)
		sa(ps, 0);
}

void	algo_4(t_push_swap *ps)
{
	if (!is_sorted(ps->a))
	{
		pb_less_significant(ps, 2);
		sort_2_last(ps);
		while (ps->length_b)
			pa(ps);
	}
}

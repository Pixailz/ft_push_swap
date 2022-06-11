/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 20:00:11 by pix               #+#    #+#             */
/*   Updated: 2022/06/11 09:49:12 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	algo_4(t_push_swap *ps)
{
	if (!ps->is_computed)
		pre_compute(ps);
	if (!is_sorted(ps->a))
	{
		pb_most_significant(ps, 1);
		algo_3(ps);
		pa_all_b(ps);
	}
}

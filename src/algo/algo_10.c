/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_10.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 10:49:19 by brda-sil          #+#    #+#             */
/*   Updated: 2022/06/11 09:49:12 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	algo_10(t_push_swap *ps)
{
	if (!ps->is_computed)
		pre_compute(ps);
	if (!is_sorted(ps->a))
	{
		pb_most_significant(ps, ps->length_a - 5);
		algo_5(ps);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 18:01:23 by brda-sil          #+#    #+#             */
/*   Updated: 2022/06/11 09:39:05 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	algo_2(t_push_swap *ps)
{
	if (!ps->is_computed)
		pre_compute(ps);
	if (ps->a->index < ps->a->next->index)
		sa(ps, 0);
}

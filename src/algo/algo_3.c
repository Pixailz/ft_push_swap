/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 23:03:06 by brda-sil          #+#    #+#             */
/*   Updated: 2022/06/03 23:42:24 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	algo_3(t_push_swap *ps)
{
	if (!is_sorted(ps->a))
	{
		if (ps->a->index == 1 && ps->a->next->index == 0 && \
			ps->a->next->next->index == 2)
			sa(ps, 0);
		else if (ps->a->index == 1 && ps->a->next->index == 2 && \
			ps->a->next->next->index == 0)
			rra(ps, 0);
		else if (ps->a->index == 2 && ps->a->next->index == 0 && \
			ps->a->next->next->index == 1)
			ra(ps, 0);
	}
}

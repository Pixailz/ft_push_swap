/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 17:18:14 by brda-sil          #+#    #+#             */
/*   Updated: 2022/05/29 17:56:03 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	algo_5(t_push_swap *ps)
{
	while (!is_sorted(ps))
	{
		if (stack_get_value_before_top(ps->a) > stack_get_value_at_top(ps->a))
		{
			sa(ps, 0);
			if (!is_sorted(ps))
				rra(ps, 0);
		}
		else
			ra(ps, 0);
	}
}

/*
1 3 4 5 2
sa
1 3 4 2 5
rra
3 4 2 5 1
sa
3 4 2 1 5

*/

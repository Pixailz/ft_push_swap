/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 23:03:06 by brda-sil          #+#    #+#             */
/*   Updated: 2022/06/10 15:56:54 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	algo_3_part2(t_push_swap *ps)
{
	if (ps->a->index == 2)
	{
		if (ps->a->next->index == 0)
		{
			sa(ps, 0);
			ra(ps, 0);
		}
	}
	else if (ps->a->index == 1)
	{
		if (ps->a->next->index == 2)
			sa(ps, 0);
		else if (ps->a->next->index == 0)
			rra(ps, 0);
	}
	else if (ps->a->index == 0)
	{
		if (ps->a->next->index == 1)
		{
			sa(ps, 0);
			rra(ps, 0);
		}
		else if (ps->a->next->index == 2)
			ra(ps, 0);
	}
}

void	algo_3(t_push_swap *ps)
{
	if (!is_sorted(ps->a))
	{
		algo_3_part2(ps);
	}
}

/*
1 2 3
1 3 2	good
2 1 3	good
2 3 1	good
3 2 1	good
3 1 2
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_4_brut.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 09:13:02 by brda-sil          #+#    #+#             */
/*   Updated: 2022/06/07 09:52:12 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	algo_4_brut_1(t_push_swap *ps)
{
	if (ps->a->index == 1)
	{
		if (ps->a->next->index == 2)
		{
			if (ps->a->next->next->index == 3)
				rra(ps, 0);
			else
				algo_4_brut_023(ps);
		}
	}
}

void	algo_4_brut(t_push_swap *ps)
{
	if (ps->a->index == 0)
	{
		if (ps->a->next->index == 1)
		{
			if (ps->a->next->next->index == 3)
				sa(ps, 0);
		}
		else if (ps->a->next->index == 2)
		{
			if (ps->a->next->next->index == 1)
				algo_4_brut_021(ps);
			else
				algo_4_brut_023(ps);
		}
		else if (ps->a->next->index == 3)
		{
			if (ps->a->next->next->index == 1)
				algo_4_brut_031(ps);
			else
				algo_4_brut_032(ps);
		}
	}
	else
		algo_4_brute_1(ps);
}



/*
1 2 3 4
1 2 4 3
1 3 2 4
1 3 4 2
1 4 2 3
1 4 3 2

2 3 4 1
2 3 1 4
*/

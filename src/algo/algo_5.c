/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 17:18:14 by brda-sil          #+#    #+#             */
/*   Updated: 2022/05/29 21:46:34 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	algo_5(t_push_swap *ps)
{
	int		most_significant;

	most_significant = get_most_significant(ps->a);
	while (ps->a)
	{
		if (stack_get_value_at_top(ps->a) == most_significant)
		{
			pb(ps);
			if (ps->is_stack_a_empty)
				break ;
			most_significant = get_most_significant(ps->a);
		}
		else
			ra(ps, 0);
	}
	while (!ps->is_stack_b_empty)
	{
		pa(ps);
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
/*
3 2 1 4
ra
4 3 2 1
sa
4 3 1 2
rra
3 1 2 4
ra

*/

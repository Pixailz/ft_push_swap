/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_5_bis.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 17:18:14 by brda-sil          #+#    #+#             */
/*   Updated: 2022/05/30 23:13:56 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	algo_5_bis(t_push_swap *ps)
{
	int		most_significant;
	int		most_significant_index;

	most_significant = get_most_significant(ps->a);
	most_significant_index = get_most_significant_index(ps->a);
	while (ps->a)
	{
		if (is_sorted(ps))
			break ;
		if (stack_get_value_at_top(ps->a) == most_significant)
		{
			pb(ps);
			if (ps->is_stack_a_empty)
				break ;
			most_significant = get_most_significant(ps->a);
		}
		else
		{
			if (most_significant_index + 1 > (ps->length_a / 2))
				ra(ps, 0);
			else
				rra(ps, 0);
			most_significant_index = get_most_significant_index(ps->a);
		}
	}
	while (!ps->is_stack_b_empty)
		pa(ps);
}

/*
./checker_linux 5 4 3 2 1
rra
pb
rra
pb
rra
pb
sa
pa
pa
pa
OK
*/
/*
5                                 5         '
2   2   3   4                  4  4         '
3   3   4   1  1   3   3  3 3  3  3         '
4   4   1   2  24  14 14 24 24 2  2         '
1   15  25  35 35  25 25 15 15 15 1         '
AB  AB  AB  AB AB  AB Ab AB AB AB AB        '
pb  ra  ra  pb rra pb sa pa pa pa           '
*/

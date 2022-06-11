/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 17:18:14 by brda-sil          #+#    #+#             */
/*   Updated: 2022/06/11 09:49:12 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	algo_5(t_push_swap *ps)
{
	if (!ps->is_computed)
		pre_compute(ps);
	if (!is_sorted(ps->a) || ps->length_b)
	{
		pb_most_significant(ps, 2);
		algo_3(ps);
		pa_all_b(ps);
	}
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

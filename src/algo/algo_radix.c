/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_radix.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 00:31:32 by brda-sil          #+#    #+#             */
/*   Updated: 2022/06/11 01:35:58 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	algo_radix_sort(t_push_swap *ps)
{
	int		i[3];

	i[2] = get_most_significant_index(ps->a);
	while (!is_sorted(ps->a))
	{
		i[1] = 0;
		while (i[1] <= i[2])
		{
			if (ps->a && !(ps->a->index >> i[0] & 0x1))
				pb(ps);
			else
				ra(ps, 0);
			i[1]++;
		}
		while (ps->b)
			pa(ps);
		i[0]++;
	}
}

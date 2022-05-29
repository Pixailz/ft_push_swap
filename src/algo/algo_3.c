/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 13:37:33 by brda-sil          #+#    #+#             */
/*   Updated: 2022/05/29 17:45:53 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	algo_3(t_push_swap *ps)
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
3 2 1
sa
3 1 2
rra
1 2 3
*/

/*
3 1 2
rra
2 3 1
sa
2 1 3
ra
1 3 2
sa
1 2 3
*/

/*
1 3 2
sa
1 2 3
|||||||||
1 3 2
ra
1 2 3
*/

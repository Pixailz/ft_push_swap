/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_4_comb.1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 09:28:09 by brda-sil          #+#    #+#             */
/*   Updated: 2022/06/07 09:47:35 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	algo_4_brut_021(t_push_swap *ps)
{
	ra(ps, 0);
	sa(ps, 0);
	rra(ps, 0);
}

void	algo_4_brut_023(t_push_swap *ps)
{
	rra(ps, 0);
	sa(ps, 0);
}

void	algo_4_brut_031(t_push_swap *ps)
{
	sa(ps, 0);
	ra(ps, 0);
}

void	algo_4_brut_032(t_push_swap *ps)
{
	pb(ps);
	sa(ps, 0);
	rra(ps, 0);
	pa(ps);
}

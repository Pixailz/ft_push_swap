/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 23:57:29 by brda-sil          #+#    #+#             */
/*   Updated: 2022/05/31 16:58:57 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	choose_algo(t_push_swap *ps)
{
	if (DEBUG)
		stack_view(ps);
	if (ps->length_a == 2)
		algo_2(ps);
	else if (ps->length_a == 3)
		algo_3(ps);
	else
		algo_5_bis(ps);
	if (DEBUG)
		stack_view(ps);
}

int	main(int argc, char **argv)
{
	t_push_swap	ps;

	if (argc < 2)
		ft_error("not enought args");
	ps.a = parse(argc, argv);
	ps.is_stack_a_empty = 0;
	ps.is_stack_b_empty = 1;
	ps.length_a = stack_get_size(ps.a);
	choose_algo(&ps);
	free_entry_point(&ps);
	return (0);
}

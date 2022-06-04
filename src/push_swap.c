/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 23:57:29 by brda-sil          #+#    #+#             */
/*   Updated: 2022/06/04 11:15:01 by brda-sil         ###   ########.fr       */
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
	else if (ps->length_a > 3 && ps->length_a < 6)
		algo_5(ps);
	else
		algo_5(ps);
	if (DEBUG)
		stack_view(ps);
}

int	main(int argc, char **argv)
{
	t_push_swap	ps;

	if (argc < 2)
		ft_error("not enought args");
	init(&ps, argc, argv);
	choose_algo(&ps);
	//rra(&ps, 0);
	//sa(&ps, 0);
	free_entry_point(&ps);
	return (0);
}

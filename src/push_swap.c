/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 23:57:29 by brda-sil          #+#    #+#             */
/*   Updated: 2022/05/29 20:22:39 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_push_swap	ps;
	int			stack_a_size;

	if (argc < 2)
		ft_error("not enought args");
	ps.a = parse(argc, argv);
	ps.is_stack_a_empty = 0;
	ps.is_stack_b_empty = 1;
	stack_a_size = stack_get_size(ps.a);
	if (DEBUG)
		stack_view(&ps);
	if (stack_a_size == 2)
		algo_2(&ps);
	else if (stack_a_size == 3)
		algo_3(&ps);
	else
		algo_5(&ps);
	if (DEBUG)
		stack_view(&ps);
	free_entry_point(&ps);
	return (0);
}

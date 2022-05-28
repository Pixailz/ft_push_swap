/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 23:57:29 by brda-sil          #+#    #+#             */
/*   Updated: 2022/05/28 14:55:05 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_push_swap	ps;

	if (argc < 2)
		ft_error("not enought args");
	ps.a = parse(argc, argv);
	ps.is_stack_b_empty = 1;
	ps.b = stack_new(100, 0);
	ps.is_stack_b_empty = 0;
	stack_push_top(ps.b, 101);
	stack_push_top(ps.b, 102);
	ft_printf("value on b at index 1: %d\n", stack_get_value_at_index(ps.b, 1));
	free_entry_point(&ps);
	return (0);
}

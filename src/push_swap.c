/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 23:57:29 by brda-sil          #+#    #+#             */
/*   Updated: 2022/05/27 18:04:54 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_push_swap	ps;

	if (argc < 2)
		ft_error("not enought args");
	ps.a = parse(argc, argv);
	ps.b = stack_new(10, 0);
	stack_push_top(ps.b, 11);
	stack_push_top(ps.b, 12);
	stack_push_top(ps.b, 13);
	stack_view(ps.b);
	stack_view(ps.a);
	ft_printf("rra\n");
	rra(&ps);
	stack_view(ps.b);
	stack_view(ps.a);
	ft_printf("sa\n");
	sa(&ps);
	stack_view(ps.b);
	stack_view(ps.a);
	free_entry_point(&ps);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 01:26:42 by brda-sil          #+#    #+#             */
/*   Updated: 2022/06/03 23:20:04 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init(t_push_swap *ps, int argc, char **argv)
{
	ps->a = parse(argc, argv);
	ps->is_stack_a_empty = 0;
	ps->is_stack_b_empty = 1;
	ps->less_significant_index = get_less_significant_index(ps->a);
	ps->less_significant_value = get_less_significant_value(ps->a);
	ps->most_significant_index = get_most_significant_index(ps->a);
	ps->most_significant_value = get_most_significant_value(ps->a);
	ps->length_a = stack_get_size(ps->a);
	ps->length_b = 0;
	pre_compute(ps);
}

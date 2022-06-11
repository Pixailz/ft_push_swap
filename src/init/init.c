/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 01:26:42 by brda-sil          #+#    #+#             */
/*   Updated: 2022/06/11 09:39:15 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init(t_push_swap *ps, int argc, char **argv)
{
	parse(&ps->a, argc, argv);
	ps->most_significant_index = get_most_significant_index(ps->a);
	ps->length_a = stack_get_size(ps->a);
	ps->length_b = 0;
	ps->is_computed = 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 01:08:49 by brda-sil          #+#    #+#             */
/*   Updated: 2022/05/27 17:33:40 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_push_swap *ps)
{
	t_stack	*tmp1;
	t_stack	*tmp2;

	tmp1 = ps->b;
	tmp2 = ps->a;
	while (tmp1->next)
		tmp1 = tmp1->next;
	while (tmp2->next)
		tmp2 = tmp2->next;
	stack_push_top(ps->a, tmp1->value);
	stack_pop_top(ps->b);
}

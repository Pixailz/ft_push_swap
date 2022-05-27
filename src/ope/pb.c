/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 01:08:49 by brda-sil          #+#    #+#             */
/*   Updated: 2022/05/27 17:33:58 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_push_swap *ps)
{
	t_stack	*tmp1;
	t_stack	*tmp2;

	tmp1 = ps->a;
	tmp2 = ps->b;
	while (tmp1->next)
		tmp1 = tmp1->next;
	while (tmp2->next)
		tmp2 = tmp2->next;
	stack_push_top(ps->b, tmp1->value);
	stack_pop_top(ps->a);
}

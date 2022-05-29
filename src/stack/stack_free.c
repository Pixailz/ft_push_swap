/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_free.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 13:34:06 by brda-sil          #+#    #+#             */
/*   Updated: 2022/05/29 15:42:55 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_free(t_stack *s)
{
	t_stack	*tmp;

	while (s->next)
	{
		tmp = s->next;
		free(s);
		s = tmp;
	}
	free(s);
}

void	free_entry_point(t_push_swap *ps)
{
	if (!ps->is_stack_a_empty)
		stack_free(ps->a);
	if (!ps->is_stack_b_empty)
		stack_free(ps->b);
}

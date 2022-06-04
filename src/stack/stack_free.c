/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_free.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 13:34:06 by brda-sil          #+#    #+#             */
/*   Updated: 2022/06/03 23:20:56 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_free(t_stack *s, int size)
{
	t_stack	*tmp;
	int		index;

	index = 0;
	while (index < size)
	{
		tmp = s->next;
		free(s);
		s = tmp;
		index++;
	}
	free(s);
}

void	free_entry_point(t_push_swap *ps)
{
	if (!ps->is_stack_a_empty)
		stack_free(ps->a, ps->length_a);
	if (!ps->is_stack_b_empty)
		stack_free(ps->b, ps->length_b);
}

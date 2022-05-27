/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_free.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 13:34:06 by brda-sil          #+#    #+#             */
/*   Updated: 2022/05/27 03:49:45 by brda-sil         ###   ########.fr       */
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
	stack_free(ps->a);
	if (ps->b)
		stack_free(ps->b);
}

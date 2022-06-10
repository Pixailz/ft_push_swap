/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 18:20:40 by brda-sil          #+#    #+#             */
/*   Updated: 2022/06/10 15:16:53 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_swap_top(t_stack **s)
{
	t_stack	*first;

	if (!*s || !(*s)->next)
		return ;
	first = *s;
	*s = (*s)->next;
	first->prev = *s;
	first->next = (*s)->next;
	if (first->next)
		first->next->prev = first;
	(*s)->next = first;
	(*s)->prev = NULL;
}

void	stack_rotate(t_stack **s)
{
	t_stack	*end;
	t_stack	*first;

	if (!*s)
		return ;
	first = *s;
	end = *s;
	while (end->next)
		end = end->next;
	*s = first->next;
	first->prev = end;
	if (first->next)
		first->next->prev = NULL;
	first->next = NULL;
	end->next = first;
}

void	stack_reverse_rotate(t_stack **s)
{
	t_stack	*end;
	t_stack	*first;

	if (!*s)
		return ;
	first = *s;
	end = *s;
	while (end->next)
		end = end->next;
	end->next = first;
	end->next->prev = end;
	if (end->prev)
		end->prev->next = NULL;
	*s = end;
}

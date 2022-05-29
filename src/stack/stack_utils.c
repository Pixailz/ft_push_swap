/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 18:20:40 by brda-sil          #+#    #+#             */
/*   Updated: 2022/05/29 16:04:13 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stack_new(int content, int index)
{
	t_stack	*tmp;

	tmp = (t_stack *)malloc(sizeof(t_stack));
	tmp->next = NULL;
	tmp->prev = NULL;
	tmp->index = index;
	tmp->value = content;
	return (tmp);
}

void	stack_new_b(int content, int index, t_push_swap *ps)
{
	ps->b = (t_stack *)malloc(sizeof(t_stack));
	ps->b->next = NULL;
	ps->b->prev = NULL;
	ps->b->index = index;
	ps->b->value = content;
	ps->is_stack_b_empty = 0;
}

void	stack_new_a(int content, int index, t_push_swap *ps)
{
	ps->a = (t_stack *)malloc(sizeof(t_stack));
	ps->a->next = NULL;
	ps->a->prev = NULL;
	ps->a->index = index;
	ps->a->value = content;
	ps->is_stack_a_empty = 0;
}

void	stack_push_top(t_stack *s, int value)
{
	t_stack	*tmp;
	int		i;

	tmp = s;
	i = 0;
	while (tmp->next)
	{
		tmp = tmp->next;
		i++;
	}
	tmp->next = stack_new(value, i + 1);
	tmp->next->prev = tmp;
	stack_arrange_index(s);
}

t_stack	*stack_push_bottom(t_stack *s, int value)
{
	t_stack	*tmp;
	int		i;

	tmp = s;
	i = 0;
	while (tmp->prev)
	{
		tmp = tmp->prev;
		i--;
	}
	tmp->prev = stack_new(value, i - 1);
	tmp->prev->next = tmp;
	s = tmp->prev;
	stack_arrange_index(s);
	return (s);
}

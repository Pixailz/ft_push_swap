/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 18:20:40 by brda-sil          #+#    #+#             */
/*   Updated: 2022/05/25 17:05:30 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stack_new(int content, int index)
{
	t_stack	*ptr;

	ptr = (t_stack *)malloc(sizeof(t_stack));
	ptr->next = NULL;
	ptr->prev = NULL;
	ptr->index = index;
	ptr->value = content;
	return (ptr);
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
}

void	stack_arrange_index(t_stack *s)
{
	int	i;

	i = 0;
	while (s->next)
	{
		s->index = i;
		s = s->next;
		i++;
	}
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

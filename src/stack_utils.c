/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 18:20:40 by brda-sil          #+#    #+#             */
/*   Updated: 2022/05/27 03:27:59 by brda-sil         ###   ########.fr       */
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
	stack_arrange_index(s);
}

void	stack_arrange_index(t_stack *s)
{
	int		i;
	t_stack	*tmp;

	tmp = s;
	i = 0;
	while (tmp)
	{
		tmp->index = i;
		tmp = tmp->next;
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

int	stack_get_size(t_stack *s)
{
	int	i;

	i = 1;
	while (s->next)
	{
		i++;
		s = s->next;
	}
	return (i);
}

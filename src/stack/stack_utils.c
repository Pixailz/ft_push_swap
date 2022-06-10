/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 18:20:40 by brda-sil          #+#    #+#             */
/*   Updated: 2022/06/10 15:18:09 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_get_new(t_stack **s, int value, int index)
{
	*s = (t_stack *)malloc(sizeof(t_stack));
	if (!*s)
		ft_error("stack_get_new: malloc");
	(*s)->next = NULL;
	(*s)->prev = NULL;
	(*s)->value = value;
	(*s)->index = index;
}

void	stack_push_top(t_stack **s, int value, int index)
{
	t_stack	*new;

	stack_get_new(&new, value, index);
	new->next = *s;
	(*s)->prev = new;
	*s = new;
}

void	stack_push_bottom(t_stack **s, int value, int index)
{
	t_stack	*new;
	t_stack	*end;

	stack_get_new(&new, value, index);
	end = *s;
	while (end->next)
		end = end->next;
	end->next = new;
	new->prev = end;
}

void	stack_pop_top(t_stack **s)
{
	t_stack	*next;

	if (!*s)
		return ;
	next = (*s)->next;
	if (next)
		next->prev = NULL;
	free(*s);
	*s = next;
}

void	stack_pop_bottom(t_stack **s)
{
	t_stack	*end;
	t_stack	*before_end;

	if (!*s)
		return ;
	end = (*s)->next;
	while (end->next)
		end = end->next;
	before_end = end->prev;
	before_end->next = NULL;
	free(end);
}

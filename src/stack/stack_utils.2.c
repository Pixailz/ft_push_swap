/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 18:20:40 by brda-sil          #+#    #+#             */
/*   Updated: 2022/06/03 23:39:21 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_get_value_at_index(t_stack *s, int index)
{
	t_stack	*tmp;

	tmp = s;
	while (tmp->next && tmp->index != index)
		tmp = tmp->next;
	return (tmp->value);
}

int	stack_get_size(t_stack *s)
{
	t_stack	*ptr;
	int		size;

	ptr = s;
	size = 1;
	while (ptr->next)
	{
		ptr = ptr->next;
		size++;
	}
	return (size);
}

void	stack_view(t_push_swap *ps)
{
	stack_view_a(ps);
	stack_view_b(ps);
}

void	stack_view_a(t_push_swap *ps)
{
	t_stack	*tmp;

	if (ps->is_stack_a_empty)
		ft_printf("A : empty\n");
	else
	{
		tmp = ps->a;
		ft_printf("A : ", tmp->value);
		while (tmp)
		{
			ft_printf("%d ", tmp->value);
			tmp = tmp->next;
		}
		ft_printf("\n");
	}
}

void	stack_view_b(t_push_swap *ps)
{
	t_stack	*tmp;

	if (ps->is_stack_b_empty)
		ft_printf("B : empty\n\n");
	else
	{
		tmp = ps->b;
		ft_printf("B : ", tmp->value);
		while (tmp)
		{
			ft_printf("%d ", tmp->value);
			tmp = tmp->next;
		}
		ft_printf("\n\n");
	}
}

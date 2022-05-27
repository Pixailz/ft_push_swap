/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 18:20:40 by brda-sil          #+#    #+#             */
/*   Updated: 2022/05/27 18:00:55 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_view(t_stack *s)
{
	t_stack	*tmp;

	tmp = s;
	while (tmp)
	{
		ft_printf("s[%d] -> %d\n", tmp->index, tmp->value);
		tmp = tmp->next;
	}
	ft_putchar('\n');
}

void	stack_pop_top(t_stack *s)
{
	t_stack	*tmp;

	tmp = s;
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->prev->next = NULL;
	free(tmp);
}

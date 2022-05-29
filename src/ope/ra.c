/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 01:08:49 by brda-sil          #+#    #+#             */
/*   Updated: 2022/05/29 17:05:36 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_push_swap *ps, int is_rrr)
{
	t_stack	*tmp;
	int		last_value;

	tmp = ps->a;
	while (tmp->next)
		tmp = tmp->next;
	last_value = tmp->value;
	while (tmp->prev)
	{
		tmp->value = tmp->prev->value;
		tmp = tmp->prev;
	}
	tmp->value = last_value;
	if (!is_rrr)
		post_ra(ps);
}

void	post_ra(t_push_swap *ps)
{
	ft_printf("ra\n");
	if (DEBUG)
		stack_view(ps);
}

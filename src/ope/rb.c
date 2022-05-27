/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 01:08:49 by brda-sil          #+#    #+#             */
/*   Updated: 2022/05/27 17:53:19 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rb(t_push_swap *ps)
{
	t_stack	*tmp1;
	int		tmp2;

	tmp1 = ps->b;
	tmp2 = ps->b->value;
	while (tmp1->next)
	{
		tmp1->value = tmp1->next->value;
		tmp1 = tmp1->next;
	}
	tmp1->value = tmp2;
}

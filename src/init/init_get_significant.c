/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_get_significant.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pix <pix@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 01:26:42 by brda-sil          #+#    #+#             */
/*   Updated: 2022/06/04 13:45:48 by pix              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_less_significant_value(t_stack *s)
{
	t_stack	*tmp;
	int		saved_number;

	tmp = s;
	saved_number = tmp->value;
	while (tmp->next)
	{
		if (tmp->next->value < saved_number)
			saved_number = tmp->next->value;
		tmp = tmp->next;
	}
	return (saved_number);
}

int	get_less_significant_index(t_stack *s)
{
	t_stack	*tmp;
	int		saved_index;
	int		saved_number;

	tmp = s;
	saved_number = tmp->value;
	saved_index = tmp->index;
	while (tmp->next)
	{
		if (tmp->next->value < saved_number)
		{
			saved_index = tmp->next->index;
			saved_number = tmp->next->value;
		}
		tmp = tmp->next;
	}
	return (saved_index);
}

int	get_most_significant_value(t_stack *s)
{
	t_stack	*tmp;
	int		saved_number;

	tmp = s;
	saved_number = tmp->value;
	while (tmp->next)
	{
		if (tmp->next->value > saved_number)
			saved_number = tmp->next->value;
		tmp = tmp->next;
	}
	return (saved_number);
}

int	get_most_significant_index(t_stack *s)
{
	t_stack	*tmp;
	int		saved_index;

	tmp = s;
	saved_index = tmp->index;
	while (tmp->next)
	{
		if (tmp->next->index > saved_index)
			saved_index = tmp->next->index;
		tmp = tmp->next;
	}
	return (saved_index);
}

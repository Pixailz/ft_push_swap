/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_get_address.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 01:26:42 by brda-sil          #+#    #+#             */
/*   Updated: 2022/06/01 02:04:58 by brda-sil         ###   ########.fr       */
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
	int		saved_number;

	tmp = s;
	saved_number = tmp->value;
	saved_index = tmp->index;
	while (tmp->next)
	{
		if (tmp->next->value > saved_number)
		{
			saved_index = tmp->next->index;
			saved_number = tmp->next->value;
		}
		tmp = tmp->next;
	}
	return (saved_index);
}

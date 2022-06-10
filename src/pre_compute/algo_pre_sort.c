/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_pre_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 13:31:45 by brda-sil          #+#    #+#             */
/*   Updated: 2022/06/10 15:56:09 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*get_list(t_stack *s, int length)
{
	t_stack	*tmp;
	int		*list;
	int		index;

	list = (int *)malloc(sizeof(int) * (length + 1));
	if (!list)
		ft_error("Malloc");
	tmp = s;
	index = 0;
	while (index < length)
	{
		list[index++] = tmp->value;
		tmp = tmp->next;
	}
	return (list);
}

int	*get_sorted_list(t_stack *s, int length)
{
	int	*list;
	int	index;

	list = get_list(s, length);
	index = 0;
	while (index + 1 < length)
	{
		if (list[index] > list[index + 1])
		{
			list[index] ^= list[index + 1];
			list[index + 1] ^= list[index];
			list[index] ^= list[index + 1];
			index = 0;
		}
		else
			index++;
	}
	return (list);
}

void	arrange_index(t_push_swap *ps, int *list)
{
	int		index;
	t_stack	*tmp;

	index = 0;
	while (index < ps->length_a)
	{
		tmp = ps->a;
		while (tmp)
		{
			if (tmp->value == list[index])
			{
				tmp->index = ps->length_a - 1 - index;
				break ;
			}
			tmp = tmp->next;
		}
		index++;
	}
}

void	pre_compute(t_push_swap *ps)
{
	int		*list;

	list = get_sorted_list(ps->a, ps->length_a);
	arrange_index(ps, list);
	free(list);
}

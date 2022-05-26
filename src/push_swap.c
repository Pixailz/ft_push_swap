/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 23:57:29 by brda-sil          #+#    #+#             */
/*   Updated: 2022/05/26 03:45:01 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack		*s;

	if (argc < 2)
		ft_error("not enought args");
	s = parse(argc, argv);
	stack_free(s);
	return (0);
}

/*
push_swap 1 2 3

list->value = 1
list->next->value = 2
list->next->next->value = 3
*/

/*
int	main(void)
{
	t_stack	*list;

	list = stack_new(0, 0);
	stack_push_top(list, 2);
	stack_push_top(list, 4);
	stack_push_top(list, 6);
	stack_push_top(list, 8);
	list = stack_push_bottom(list, -8);
	ft_printf("test[%d]: %d\n", list->index, list->value);
	ft_printf("test[%d]: %d\n", list->next->prev->index, \
								list->next->prev->value);
	stack_free(list);
}
*/

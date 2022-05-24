/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 23:57:29 by brda-sil          #+#    #+#             */
/*   Updated: 2022/05/24 14:33:47 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_list	*test1;
	t_list	**tmp;
	int		i;

	if (argc < 2)
		return (-1);
	test1 = ft_lstnew(argv[1]);
	i = 0;
	while (i < argc - 1)
	{
		tmp = &test1->next;
		(*tmp)->next = ft_lstnew(argv[i++ + 1]);
	}
	ft_printf("test1[0]: %s\n", test1->content);
	ft_printf("test1[1]: %s\n", test1->next->content);
	return (0);
}

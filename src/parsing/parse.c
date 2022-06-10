/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 16:58:39 by brda-sil          #+#    #+#             */
/*   Updated: 2022/06/09 15:57:36 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	parse_multiple_string(t_stack **a, char **argv, int argc)
{
	int		i;

	stack_get_new(a, ft_atoi(argv[argc-- - 1]), 0);
	i = 1;
	while (i < argc)
		stack_push_top(a, ft_atoi(argv[argc-- - 1]), 0);
}

void	parse_one_string(t_stack **a, char *argv)
{
	int		number_arg;
	int		i;
	char	**tmp_list;

	number_arg = ft_get_words(argv, ' ');
	tmp_list = ft_split(argv, ' ');
	i = 0;
	stack_get_new(a, ft_atoi(tmp_list[number_arg-- - 1]), 0);
	while (i < number_arg)
		stack_push_top(a, ft_atoi(tmp_list[number_arg-- - 1]), 0);
	ft_split_free(tmp_list);
	free(tmp_list);
}

void	parse(t_stack **a, int argc, char **argv)
{
	char	*ptr;

	if (argc == 2)
	{
		ptr = ft_strdup(argv[1]);
		if (!parse_check_one_string(ptr))
			ft_error("have same number in a single string");
		parse_one_string(a, argv[1]);
	}
	else
	{
		if (!parse_check_multiple_string(argv, argc))
		{
			ft_error("have same number in multiple string");
		}
		parse_multiple_string(a, argv, argc);
	}
}

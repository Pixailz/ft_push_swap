/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 16:58:39 by brda-sil          #+#    #+#             */
/*   Updated: 2022/06/03 23:08:16 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*parse_multiple_string(char **argv, int argc)
{
	int		i;
	t_stack	*s;

	s = stack_new(ft_atoi(argv[argc-- - 1]), 0);
	i = 1;
	while (i < argc)
		stack_push_top(s, ft_atoi(argv[argc-- - 1]), 0);
	return (s);
}

t_stack	*parse_one_string(char *argv)
{
	int		number_arg;
	int		i;
	t_stack	*s;
	char	**tmp_list;

	number_arg = ft_get_words(argv, ' ');
	tmp_list = ft_split(argv, ' ');
	i = 0;
	s = stack_new(ft_atoi(tmp_list[number_arg-- - 1]), 0);
	while (i < number_arg)
		stack_push_top(s, ft_atoi(tmp_list[number_arg-- - 1]), 0);
	ft_split_free(tmp_list);
	free(tmp_list);
	return (s);
}

t_stack	*parse(int argc, char **argv)
{
	t_stack	*s;
	char	*ptr;

	if (argc == 2)
	{
		ptr = ft_strdup(argv[1]);
		if (!parse_check_one_string(ptr))
			ft_error("have same number in a single string");
		s = parse_one_string(argv[1]);
	}
	else
	{
		if (!parse_check_multiple_string(argv, argc))
		{
			ft_error("have same number in multiple string");
		}
		s = parse_multiple_string(argv, argc);
	}
	return (s);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 16:58:39 by brda-sil          #+#    #+#             */
/*   Updated: 2022/05/25 22:49:03 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*parse_multiple_string(char **argv, int argc)
{
	int		i;
	t_stack	*s;

	s = (t_stack *)malloc(sizeof(t_stack));
	s = stack_new(ft_atoi(argv[1]), 0);
	i = 2;
	while (i < argc)
		stack_push_top(s, ft_atoi(argv[i++]));
	return (s);
}

t_stack	*parse_one_string(char *argv)
{
	int		number_arg;
	int		i;
	t_stack	*s;
	char	**tmp_list;

	number_arg = ft_get_words(argv, ' ');
	tmp_list = (char **)malloc(sizeof(char *) * number_arg);
	tmp_list = ft_split(argv, ' ');
	i = 0;
	s = (t_stack *)malloc(sizeof(t_stack));
	s = stack_new(ft_atoi(tmp_list[i++]), 0);
	while (i < number_arg)
		stack_push_top(s, ft_atoi(tmp_list[i++]));
	return (s);
}

t_stack	*parse(int argc, char **argv)
{
	t_stack	*s;

	if (argc == 2)
	{
		if (!parse_check_one_string(argv[1]))
			ft_error("check one string");
		s = parse_one_string(argv[1]);
	}
	else
	{
		if (!parse_check_multiple_string(argv, argc))
			ft_error("check multiple string");
		s = parse_multiple_string(argv, argc);
	}
	return (s);
}

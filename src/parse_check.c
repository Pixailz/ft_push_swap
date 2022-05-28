/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 17:22:09 by brda-sil          #+#    #+#             */
/*   Updated: 2022/05/28 14:39:32 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	parse_check_is_str_numeric(const char *str)
{
	char	*tmp;
	int		have_hyphen;
	int		is_numeric;

	have_hyphen = 0;
	is_numeric = 1;
	tmp = (char *)str;
	if (*tmp == '-')
	{
		have_hyphen = 1;
		if (!*(tmp + 1))
			is_numeric = 0;
		tmp++;
	}
	while (*tmp)
	{
		if (*tmp < '0' || *tmp > '9')
			is_numeric = 0;
		tmp++;
	}
	return ((have_hyphen && is_numeric) || is_numeric);
}

long int	parse_check_is_good_number(char **tmp_list, int i, long int *number)
{
	long int	tmp_number;

	if (!parse_check_is_str_numeric(tmp_list[i]))
	{
		ft_split_free(tmp_list);
		free(tmp_list);
		free(number);
		ft_error("String is not numeric");
	}
	tmp_number = ft_atol(tmp_list[i]);
	if (tmp_number > MAX_INT)
	{
		ft_split_free(tmp_list);
		free(tmp_list);
		free(number);
		ft_error("Number to big\n");
	}
	else if (tmp_number < MIN_INT)
	{
		ft_split_free(tmp_list);
		free(tmp_list);
		free(number);
		ft_error("Number to small\n");
	}
	return (tmp_number);
}

int	parse_check_string_part2(char **tmp_list, int number_arg, long int *number)
{
	int			i;
	int			j;

	i = 0;
	while (i < number_arg)
	{
		j = 0;
		number[i] = parse_check_is_good_number(tmp_list, i, number);
		while (j < i)
		{
			if (number[j++] == number[i])
				return (0);
		}
		i++;
	}
	return (1);
}

int	parse_check_one_string(char *argv)
{
	int			number_arg;
	char		**tmp_list;
	long int	*number;
	int			i;

	number_arg = ft_get_words(argv, ' ');
	number = (long int *)malloc(sizeof(long int) * number_arg);
	if (!number)
		return (0);
	tmp_list = ft_split(argv, ' ');
	free(argv);
	i = parse_check_string_part2(tmp_list, number_arg, number);
	free(number);
	ft_split_free(tmp_list);
	free(tmp_list);
	return (i);
}

int	parse_check_multiple_string(char **argv, int argc)
{
	long int	*number;
	int			i;

	number = (long int *)malloc(sizeof(long int) * argc);
	if (!number)
		return (0);
	i = 0;
	while (i < argc - 1)
	{
		number[i] = ft_atol(argv[i + 1]);
		i++;
	}
	i = parse_check_string_part2(argv, argc, number);
	free(number);
	return (i);
}

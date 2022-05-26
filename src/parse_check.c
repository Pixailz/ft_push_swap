/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 17:22:09 by brda-sil          #+#    #+#             */
/*   Updated: 2022/05/25 23:16:24 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	parse_check_string_part2(char **tmp_list, int number_arg, int *number)
{
	int	i;
	int	j;
	int	tmp_number;

	i = 0;
	while (i < number_arg)
	{
		j = 0;
		tmp_number = ft_atol(tmp_list[i]);
		if (tmp_number > INT_MAX)
			ft_error("Number to big");
		else if (tmp_number < INT_MIN)
			ft_error("Number to small");
		number[i] = tmp_number;
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
	long int	number_arg;
	int			i;
	int			j;
	char		**tmp_list;
	int			*number;

	number_arg = ft_get_words(argv, ' ');
	number = (long int *)malloc(sizeof(long int) * number_arg);
	if (!number)
		return (0);
	tmp_list = (char **)malloc(sizeof(char *) * number_arg);
	tmp_list = ft_split(argv, ' ');
	return (parse_check_string_part2(tmp_list, number_arg, number));
}

int	parse_check_multiple_string(char **argv, int argc)
{
	int	*number;
	int	i;
	int	j;

	number = (int *)malloc(sizeof(int) * argc);
	if (!number)
		return (0);
	i = 0;
	while (i < argc - 1)
	{
		j = 0;
		number[i] = ft_atoi(argv[i + 1]);
		while (j < i)
		{
			if (number[j] == number[i])
				return (0);
			j++;
		}
		i++;
	}
	parse_check_string_part2(argv, argc, number);
	return (1);
}

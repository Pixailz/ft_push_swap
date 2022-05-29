/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_check.2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 17:22:09 by brda-sil          #+#    #+#             */
/*   Updated: 2022/05/29 14:50:53 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	parse_check_one_string_part2(char **tmp_list, int number_arg, \
															long int *number)
{
	int			i;
	int			j;

	i = 0;
	while (i < number_arg)
	{
		j = 0;
		number[i] = parse_check_one_is_good_number(tmp_list, i, number);
		while (j < i)
		{
			if (number[j++] == number[i])
				return (0);
		}
		i++;
	}
	return (1);
}

int	parse_check_multiple_string_part2(char **tmp_list, int number_arg, \
															long int *number)
{
	int			i;
	int			j;

	i = 0;
	while (i < number_arg - 1)
	{
		j = 0;
		number[i] = parse_check_multiple_is_good_number(tmp_list, i + 1, \
																		number);
		while (j < i)
		{
			if (number[j++] == number[i])
				return (0);
		}
		i++;
	}
	return (1);
}

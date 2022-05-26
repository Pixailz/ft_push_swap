/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_free.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 21:48:33 by brda-sil          #+#    #+#             */
/*   Updated: 2022/05/26 05:28:13 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_split_free(char **strarr)
{
	if (!*strarr)
		return ;
	while (strarr && *strarr)
	{
		free(*strarr);
		*strarr++ = NULL;
	}
}

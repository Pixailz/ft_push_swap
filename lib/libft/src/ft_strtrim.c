/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brda-sil <brda-sil@students.42angouleme    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 18:57:44 by brda-sil          #+#    #+#             */
/*   Updated: 2022/05/12 02:32:31 by brda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	s = ft_strlen((char *)s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (s1[s - 1] && ft_strchr(set, s1[s - 1]) && s > i)
		s--;
	return (ft_substr(s1, i, s - i));
}

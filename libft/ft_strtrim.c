/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qixu <qixu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 09:11:49 by qixu              #+#    #+#             */
/*   Updated: 2025/11/30 16:52:45 by qixu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set ++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*tmp;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && is_in_set(s1[start], set))
		start++;
	len = ft_strlen(s1);
	if (start == len)
		return (ft_strdup(""));
	end = len - 1;
	while (is_in_set(s1[end], set))
		end--;
	tmp = malloc(end - start + 2);
	if (!tmp)
		return (NULL);
	ft_memcpy(tmp, s1 + start, (end - start + 1));
	tmp[end - start + 1] = '\0';
	return (tmp);
}

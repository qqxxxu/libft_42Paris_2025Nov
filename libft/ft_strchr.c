/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qixu <qixu@student.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 22:59:26 by qixu              #+#    #+#             */
/*   Updated: 2025/11/30 14:15:59 by qixu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* 1. This function should find the first occurrence of "c"--different from ft_strrchr(), which is supposed to find the last.
2. One concept that might pose difficulty for understanding is that this function takes an INT instead of an UNSIGNED CHAR
The reason seems to be an accident in history: https://stackoverflow.com/questions/2394011/why-does-strchr-take-an-int-for-the-char-to-be-found
But in another function(getc()), an int is returned so that it could represent EOF(-1).
3. unsigned char: 0 to 255; signed char: -128 to 127.*/
char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char) c)
			return ((char *)s);
		s ++;
	}
	if ((char) c == '\0')
		return ((char *)s);
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qixu <qixu@student.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 23:15:48 by qixu              #+#    #+#             */
/*   Updated: 2025/11/30 16:47:58 by qixu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* according to its man page: 
1)The strchr() function locates the first occurrence of c (converted to a
     char) in the string pointed to by s.  The terminating null character is
     considered to be part of the string; therefore, if c is ‘\0’, the functions
     locate the terminating ‘\0’. 
The strrchr() function is identical to strchr(), except it locates the LAST
     occurrence of c.
2)The functions strchr() and strrchr() return a pointer to the located
     character */
/*Here we should find the last occurrence of c.*/
char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;

	ptr = NULL;
	while (*s)
	{
		if (*s == (char) c)
			ptr = (char *)s;
		s ++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	else
		return (ptr);
}

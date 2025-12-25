/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qixu <qixu@student.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 10:26:18 by qixu              #+#    #+#             */
/*   Updated: 2025/11/30 14:18:35 by qixu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* CODING NOTES:
1. one of the "hidden malloc" functions: strdup() is a POSIX function and performs dynamic memory allocation. Therefore, the user
must remember to free it eventually.
2. comparison of "copying" functions: 
1)strcpy(can cause buffer overflow) or strncpy(safer) copies a string to a pre-allocated memory on either the heap or the stack.
2)strdup() is more flexible but needs careful memory allocation.
3)memcpy() will only copy the number of bytes as requested, while strcpy stops when encountering a null terminator.
*/
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*tmp;

	tmp = (char *)malloc(ft_strlen(s1) + 1);
	if (!tmp)
		return (NULL);
	ft_memcpy(tmp, s1, ft_strlen(s1) + 1);
	return (tmp);
}

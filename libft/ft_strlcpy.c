/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qixu <qixu@student.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 12:17:22 by qixu              #+#    #+#             */
/*   Updated: 2025/11/30 16:22:03 by qixu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*  strlcpy() copies up to dstsize - 1 characters from the string src to dst,
 *  NUL-terminating the
 *  result if dstsize is not 0.*/

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{	
	size_t	src_len;

	src_len = ft_strlen(src);
	if (dstsize >= src_len + 1)
	{
		ft_memcpy(dst, src, src_len + 1);
	}
	else if (dstsize != 0)
	{
		ft_memcpy(dst, src, dstsize - 1);
		dst[dstsize - 1] = '\0';
	}
	return (src_len);
}

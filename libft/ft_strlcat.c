/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qixu <qixu@student.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 13:12:14 by qixu              #+#    #+#             */
/*   Updated: 2025/12/01 12:47:22 by qixu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*strlcat() appends string src to the end of dst.  
 * It will append at most dstsize - strlen(dst) -
 * 1 characters.  It will then NUL-terminate, unless dstsize
 * is 0 or the original dst string was
 * longer than dstsize (in practice this should not happen
 * as it means that either dstsize is
 * incorrect or that dst is not a proper string).
 * If the src and dst strings overlap, the behavior is undefined.*/
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	i;

	i = 0;
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	else if (src_len + dst_len <= dstsize -1)
	{
		ft_memcpy(dst + dst_len, src, src_len + 1);
	}
	else
	{
		while (i < dstsize - 1 - dst_len)
		{
			dst[dst_len + i] = src [i];
			i ++;
		}
		dst[dstsize - 1] = '\0';
	}
	return (dst_len + src_len);
}

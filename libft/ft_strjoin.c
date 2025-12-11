/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qixu <qixu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 12:29:45 by qixu              #+#    #+#             */
/*   Updated: 2025/11/30 14:26:07 by qixu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*tmp;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	tmp = malloc(len_s1 + len_s2 + 1);
	if (!tmp)
		return (NULL);
	ft_memcpy(tmp, s1, len_s1);
	ft_memcpy(tmp + len_s1, s2, len_s2);
	tmp[len_s1 + len_s2] = '\0';
	return (tmp);
}

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

//save a copy of a string
//If insufficient memory is available, NULL is returned.
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

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
/* Note how the if condition is differently carried out than ft_strrchr(). */
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

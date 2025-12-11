/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qixu <qixu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 21:26:29 by qixu              #+#    #+#             */
/*   Updated: 2025/12/02 12:18:58 by qixu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*apply a function to each character of a string*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{	
	char		*tmp;
	size_t		i;

	if (!s ||!f)
		return (NULL);
	tmp = malloc(ft_strlen(s) + 1);
	i = 0;
	if (!tmp)
		return (NULL);
	while (i < ft_strlen(s))
	{
		tmp[i] = f(i, s[i]);
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}

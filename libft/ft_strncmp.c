/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qixu <qixu@student.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 23:11:59 by qixu              #+#    #+#             */
/*   Updated: 2025/11/30 16:30:34 by qixu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//characters that appear after a ‘\0’ character are not compared.

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{	
	while ((*s1 || *s2) && (n -- > 0))
	{
		if ((unsigned char) *s1 != (unsigned char) *s2)
			return ((int)((unsigned char) *s1 - (unsigned char) *s2));
		s1 ++;
		s2 ++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qixu <qixu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 10:07:20 by qixu              #+#    #+#             */
/*   Updated: 2025/11/30 13:13:37 by qixu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_len(long n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len ++;
	while (n != 0)
	{
		n /= 10;
		len ++;
	}
	return (len);
}

char	*ft_itoa(int n)
{	
	char		*tmp;
	size_t		str_len;
	long		nbr;

	nbr = n;
	str_len = (size_t)get_len(nbr);
	tmp = malloc(str_len + 1);
	if (!tmp)
		return (NULL);
	tmp[str_len] = '\0';
	if (nbr == 0)
		tmp[0] = '0';
	if (nbr < 0)
	{
		tmp[0] = '-';
		nbr *= (-1);
	}
	while (nbr > 0)
	{
		tmp[str_len - 1] = (nbr % 10) + '0';
		nbr /= 10;
		str_len--;
	}
	return (tmp);
}

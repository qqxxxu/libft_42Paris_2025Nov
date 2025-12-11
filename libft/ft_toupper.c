/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qixu <qixu@student.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 21:44:55 by qixu              #+#    #+#             */
/*   Updated: 2025/11/30 16:58:29 by qixu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*The toupper() function converts a lower-case letter
 * to the corresponding upper-case letter.  The argument
 * must be representable as an unsigned char or the value of EOF.
 * Although the toupper() function uses the current locale, the toupper_l()
 * function may be passed a locale directly. See xlocale(3) for more
 * information*/
int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}

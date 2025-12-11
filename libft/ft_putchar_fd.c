/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qixu <qixu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 16:06:46 by qixu              #+#    #+#             */
/*   Updated: 2025/11/30 14:07:08 by qixu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
c: character to write
fd: file descriptor on which to write
*/
void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

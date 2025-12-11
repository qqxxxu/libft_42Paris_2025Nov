/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qixu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 11:19:06 by qixu              #+#    #+#             */
/*   Updated: 2025/12/02 18:35:17 by qixu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(const char *str, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i ++;
		if (str[i] != c && str[i])
		{
			count ++;
			while (str[i] != c && str[i])
				i ++;
		}
	}
	return (count);
}

static char	*create_word(const char *s, char c)
{
	int		i;
	int		j;
	char	*new_word;

	j = 0;
	while (s[j] && s[j] != c)
		j++;
	new_word = malloc(sizeof(char) * (j + 1));
	if (!new_word)
		return (NULL);
	i = 0;
	while (i < j)
	{
		new_word[i] = s[i];
		i++;
	}
	new_word[i] = '\0';
	return (new_word);
}

static void	ft_free(char **result, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(result[i]);
		i++;
	}
	free(result);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**result;

	if (!s)
		return (NULL);
	result = malloc(sizeof(char *) * (count_word(s, c) + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			result[i] = create_word(s, c);
			if (!result[i])
				return (ft_free(result, i), NULL);
			i ++;
			while (*s && *s != c)
				s++;
		}
	}
	result[i] = NULL;
	return (result);
}

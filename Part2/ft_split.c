/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfavoree <mfavoree@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 14:40:57 by mfavoree          #+#    #+#             */
/*   Updated: 2026/11/05 10:49:20 by mfavoree         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;
	size_t	isword;

	count = 0;
	i = 0;
	isword = 0;
	while (s[i])
	{
		if (isword == 0 && s[i] != c)
		{
			count += 1;
			isword = 1;
		}
		else if (isword == 1 && s[i] == c)
			isword = 0;
		i++;
	}
	return (count);
}

static size_t	ft_count_letters(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static void	ft_delete(char **p, size_t i)
{
	while (i > 0)
		free(p[--i]);
	free(p);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	size_t	i;
	size_t	len;

	p = malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (p == NULL)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			len = ft_count_letters(s, c);
			p[i] = ft_substr(s, 0, len);
			if (!p[i])
				return (ft_delete(p, i));
			s += len;
			i++;
		}
	}
	p[i] = NULL;
	return (p);
}

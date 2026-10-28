/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfavoree <mfavoree@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 14:40:57 by mfavoree          #+#    #+#             */
/*   Updated: 2026/10/28 12:57:59 by mfavoree         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Check? Make enough space to enlist all pointer values + NULL value. If fails
make sure to return a NULL. If we need to assign 0 values because our s is
empty, then we return an array only containing a NULL.
Check? Make sure that our space for our words is allocated properly. If
allocation fails, free evertyhing and return a NULL, NOT NULL ARRAY!
Check? Make sure our copying works from the exact location, and adds a \0 at the
end.
*/
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
			count+= 1;
			isword == 1;
		}
		else if (isword == 1 && s[i] == c)
			isword == 0;
		i++;
	}
	return (count);
}

static size_t	ft_count_letters(char const *j, char c)
{
	size_t	i;
	char	*p;

	i = 0;
	while (j[i] == c)
		j++;
	while (j[i] != c)
	{
		i++;
		j++;
	}
	return (i);
}

static void	ft_delete(char **p)
{
	// we want to delete everything here that was already created
	size_t	i;

	i = 0;
	while (p[i])
	{
		free(p[i]);
		i++;
	}
	free(p);
}

char	**ft_split(char const *s, char c)
{
	char		**p;
	size_t		count_words;
	size_t		count_letters;
	size_t		i;
	char const	*j;

	count_words = ft_count_words(s, c);
	p = malloc((count_words * sizeof(char *)) + sizeof(char *));
	if (p == NULL)
		return (NULL);
	i = 0;
	j = s + i;
	while (i < count)
	{
		count_letters = ft_count_letters(j, c);
		p[i] = malloc(count_letters + 1);
		if (p[i] == NULL)
		{
			ft_delete(p);
			return (NULL);
		}
		ft_memmove(p[i], j, count_letters);
		p[count_letters] = '\0';
		i++;
	}
	p[i] = NULL;
	return (p);
}
	

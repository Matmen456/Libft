/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfavoree <mfavoree@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 11:05:34 by mfavoree          #+#    #+#             */
/*   Updated: 2026/10/22 13:56:20 by mfavoree         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* 
You have to trim all characters from set from the start and the end.
I do this by finding the start position from the moment no set character is
there anymore, and return that index. The same logic applies for the last
position.
*/
// Again here, should I return null if s1 or set is NULL?

size_t	ft_pstart(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]) != NULL)
		i++;
	return (i);
}

size_t	ft_pend(char const *s1, char const *set)
{
	size_t	i;

	i = ft_strlen(s1);
	while (i > 0 && ft_strchr(set, s1[i - 1]) != NULL)
		i--;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	pstart;
	size_t	pend;
	size_t	len;
	char	*p;

	/*
	if (!s1 || !set)
		return (NULL);
	*/
	pstart = ft_pstart(s1, set);
	pend = ft_pend(s1, set);
	if (pstart > pend)
		len = 0;
	else
		len = pend - pstart;
	p = malloc(len + 1);
	if (p == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		p[i] = s1[pstart + i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

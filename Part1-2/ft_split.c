/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfavoree <mfavoree@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 14:40:57 by mfavoree          #+#    #+#             */
/*   Updated: 2026/10/23 13:19:22 by mfavoree         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Count how many spaces we need for our pointers.
size_t	ft_count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;
	size_t	isword;

	count = 0;
	i = 0;
	isword = 0;
	while (s[i])
	{
		if (isword == 0 && s[i] != c)
		{
			isword = 1;
			count++;
		}
		if (isword == 1 && s[i] == c)
			isword = 0;
		i++;
	}
	return (count);
}

size_t	ft_count(char const *s, char c, int i)
{
	while (s[i] != c)
		i++;
	return (i);
}
	
		
char	**ft_split(char const *s, char c)
{
	size_t	count;
	char	**array;
	size_t	i;
	size_t	j;

	count = ft_count_words(s, c);
	array = malloc((count * sizeof(char *)) + sizeof(char *));
	if (array == NULL)
		return (NULL);
	array[count] = NULL;
	// Now we should find the start to read from and the end
	// We should allocate that memory
	// We should print it
	i = 0
	while (array[i])	

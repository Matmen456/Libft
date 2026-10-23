/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfavoree <mfavoree@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 14:40:57 by mfavoree          #+#    #+#             */
/*   Updated: 2026/10/23 12:07:16 by mfavoree         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Count how many spaces we need for our pointers.
size_t	ft_count(char const *s, char c)
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
		
char	**ft_split(char const *s, char c)
{
	size_t	count;
	char	**array;

	count = ft_count(s, c);
	array = malloc((count * sizeof(char *)) + 1);

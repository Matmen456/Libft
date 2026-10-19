/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfavoree <mfavoree@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 12:37:28 by mfavoree          #+#    #+#             */
/*   Updated: 2026/10/19 13:26:10 by mfavoree         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
This function doesn't protect you by accident to write inside
the overlapping src memory
Example:
char str[] = "Hello";
memcpy(str + 1, str, 4);

We have to remember that we only want to prevent overlap because we want
destination to be written correctly copied from src. If they would overlap then
we could copy values from our destination potentially.

No memcpy or memmove prevents you from changing the initial src data by accident
That is not what is ment with avoiding overlap.

Avoiding overlap to avoid wrongly copy accidents, not src data changes.
Sometimes even with memmove, people want data to be written over src.
*/

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	i = 0;
	d = dest;
	s = src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

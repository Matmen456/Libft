/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfavoree <mfavoree@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 12:56:37 by mfavoree          #+#    #+#             */
/*   Updated: 2026/10/19 13:34:54 by mfavoree         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// How can we make sure that we don't change our src file if it would overlap
// with dest, so it can be copied without using a temporary array created by
// malloc or fixed size array at runtime that is forbidden?
// In what direction do we have to read?

// Overwriting only comes by when you are already in it.
/*
Which direction should you copy? What happens if dest starts inside the memory region occupied by src?

When is copying forward safe? When is copying backward safer?

When do the source and destination overlap? Consider dest < src, dest > src, and non-overlapping regions.
*/
void	*ft_memmove(void *dest, const void *src, size_t n)
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

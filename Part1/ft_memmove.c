/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfavoree <mfavoree@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 12:56:37 by mfavoree          #+#    #+#             */
/*   Updated: 2026/10/21 14:55:12 by mfavoree         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Don't forget the error handling!
NOrmally you can compare d and s. Search what happens when it cannot work
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
		// Overlap dedection is not correct, you are just comparing the same.
		if ((s + i) == (d + i))
		{
			// We read out of range here.
			i = n;
			while (i > 0)
			{
				d[i] = s[i];
				i--;
				if (i == 0)
					break ;
			}
			return (dest);
		}
		i++;
		// You are forgetting the reading in the different direction.
	}
	ft_memcpy(dest, src, n);
	return (dest);
}

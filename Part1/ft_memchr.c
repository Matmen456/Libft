/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfavoree <mfavoree@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 09:41:55 by mfavoree          #+#    #+#             */
/*   Updated: 2026/10/21 09:41:58 by mfavoree         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*p;

	p = s;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)p[i] == (unsigned char)c)
			return ((void *)p + i);
		i++;
	}
	return (NULL);
}

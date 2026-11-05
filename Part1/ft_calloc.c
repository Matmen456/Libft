/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfavoree <mfavoree@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 11:42:43 by mfavoree          #+#    #+#             */
/*   Updated: 2026/10/21 12:38:48 by mfavoree         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;
	size_t	tsize;

	if (size != 0 && (nmemb > SIZE_MAX / size))
	{
		errno = ENOMEM;
		return (NULL);
	}
	tsize = nmemb * size;
	if (tsize == 0)
		p = malloc(1);
	else
		p = malloc(tsize);
	if (p == NULL)
	{
		errno = ENOMEM;
		return (NULL);
	}
	ft_memset(p, 0, tsize);
	return (p);
}

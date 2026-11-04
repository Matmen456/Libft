/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfavoree <mfavoree@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 09:39:36 by mfavoree          #+#    #+#             */
/*   Updated: 2026/10/21 09:39:41 by mfavoree         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	i;
	size_t	j;
	size_t	slen;
	size_t	dlen;

	i = 0;
	while (i < dsize && dst[i])
		i++;
	dlen = i;
	slen = strlen(src);
	if (dlen == dsize)
		return (dlen + slen);
	j = 0;
	while (src[j] && i < dsize - 1)
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (dlen + slen);
}

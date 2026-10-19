/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfavoree <mfavoree@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 10:57:00 by mfavoree          #+#    #+#             */
/*   Updated: 2026/10/19 11:09:04 by mfavoree         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// size_t can be found in the stddef,h library defined in libft.h

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

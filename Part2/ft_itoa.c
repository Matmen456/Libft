/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfavoree <mfavoree@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 14:06:33 by mfavoree          #+#    #+#             */
/*   Updated: 2026/11/05 10:52:16 by mfavoree         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_memory(int n)
{
	size_t			count;
	unsigned int	ntem;

	count = 0;
	ntem = n;
	if (n < 0)
	{
		ntem = -ntem;
		count++;
	}
	while (ntem >= 10)
	{
		ntem = ntem / 10;
		count++;
	}
	count++;
	return (count);
}

char	*ft_itoa(int n)
{
	char			*num;
	size_t			i;
	unsigned int	ntem;

	i = ft_count_memory(n);
	num = malloc(i + 1);
	if (num == NULL)
		return (NULL);
	num[i] = '\0';
	i--;
	ntem = n;
	if (n < 0)
		ntem = 0 - ntem;
	while (ntem >= 10)
	{
		num[i] = ntem % 10 + '0';
		ntem = ntem / 10;
		i--;
	}
	num[i] = ntem % 10 + '0';
	i--;
	if (n < 0)
		num[i] = '-';
	return (num);
}

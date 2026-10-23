/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfavoree <mfavoree@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 14:06:33 by mfavoree          #+#    #+#             */
/*   Updated: 2026/10/23 10:57:15 by mfavoree         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Why does negative numbers produce nothing just a /0?
// Why can't I transform the INT_MIN?
size_t	ft_count_memory(int n)
{
	size_t	count;
	size_t	ntem;

	count = 0;
	ntem = n;
	if (n < 0)
	{
		ntem = -n;
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
	char	*num;
	size_t	i;
	size_t	ntem;

	i = ft_count_memory(n);
	num = malloc(i + 1);
	if (num == NULL)
		return (NULL);
	num[i] = '\0';
	i--;
	ntem = n;
	if (n < 0)
		ntem = -n;
	while (ntem >= 10)
	{
		num[i] = ntem % 10 + '0';
		ntem = ntem / 10;
		i--;
	}
	num[i] = ntem % 10 + '0';
	if (n < 0)
		num[i] = '-';
	return (num);
}

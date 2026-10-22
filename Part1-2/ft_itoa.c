/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfavoree <mfavoree@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 14:06:33 by mfavoree          #+#    #+#             */
/*   Updated: 2026/10/22 14:22:45 by mfavoree         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_itoa(int n)
{
	size_t	count;
	int		ntem;
	size_t	*num;

	ntem = n;
	count = 0;
	if (n < 0)
	{
		count = 1;
		ntem = -n;
	}
	while (ntem != 0)
	{
		ntem = ntem / 10;
		count++;
	}
	num = malloc(count + 1);
	if (n < 0)

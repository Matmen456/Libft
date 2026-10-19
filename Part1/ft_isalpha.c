/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfavoree <mfavoree@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 09:42:34 by mfavoree          #+#    #+#             */
/*   Updated: 2026/10/19 10:00:57 by mfavoree         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Getchar can send an error -1, to indicate read error or a non char detected.

int	ft_isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

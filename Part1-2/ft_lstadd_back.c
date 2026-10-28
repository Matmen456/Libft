/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfavoree <mfavoree@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 10:53:49 by mfavoree          #+#    #+#             */
/*   Updated: 2026/10/28 10:54:30 by mfavoree         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*nlast;

	if (new == NULL)
		return ;
	nlast = ft_lstlast(*lst);
	if (nlast == NULL)
		*lst = new;
	else
		nlast->next = new;
	new->next = NULL;
}

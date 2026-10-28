/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfavoree <mfavoree@student.42belgium.be>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 10:11:01 by mfavoree          #+#    #+#             */
/*   Updated: 2026/10/28 11:16:02 by mfavoree         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// We have a problem if f(void) would use malloc and wouldn't free its memory
// If it uses malloc if allocation fails, as we don't know if it uses malloc
// we should assume it should be responsible for this itself.

// Use ft_lstnew, ft_lstclear and ft_lstadd_back.
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*start;

	if (lst == NULL)
		return (NULL);
	new_list = malloc(sizeof(t_list));
	if (new_list == NULL)
		return (NULL);
	start = new_list;
	while (start != NULL && lst != NULL)
	{
		new_list->content = f(lst->content);
		lst = lst->next;
		if (lst != NULL)
		{
			new_list->next = malloc(sizeof(t_list));
			new_list = new_list->next;
			if (new_list == NULL)
				ft_lstclear(&start, del);
		}
		else
			new_list->next = NULL;
	}
	return (start);
}

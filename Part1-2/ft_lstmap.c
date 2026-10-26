#include "libft.h"
// We probably are not allowed to use the external functionn. Better to use 
// malloc and free myself. Malloc and free are requirments.
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;

	new_list = ft_lstnew(f(lst->value));
	lst = lst->next;
	while (lst != NULL)
	{
		new_list->next = ft_lstnew(f(lst->value));
		lst = lst->next;
	}
}

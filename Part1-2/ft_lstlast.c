#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*lstlast;

	lstlast = NULL;
	while (lst != NULL)
	{
		lstlast = lst;
		lst = lst->next;
	}
	return (lstlast);
}

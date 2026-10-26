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

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = strlen(s);
	while (1)
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			return ((char *)s + i);
		if (i == 0)
			break ;
		i--;
	}
	return (NULL);
}

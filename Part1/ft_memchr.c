#include "libft.h"

void	*memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*p;

	p = s;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)p[i] == (unsigned char)c)
			return ((void *)p + i);
		i++;
	}
	return (NULL);
}

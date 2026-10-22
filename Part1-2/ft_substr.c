#include "libft.h"
/* 
Questions.

Should I return a NULL pointer if s is NULL?
SHould I return an empty string if start is out of range of s?

*/ 
// Am I responsible for returning a NULL pointer if s is NULL. The assignment
// doesn't say so.

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*p;
	size_t	slen;

	i = 0;
	slen = ft_strlen(s);
	if (s == NULL)
		return (NULL);
	if (start >= slen)
		len = 0;
	if ((slen - start) < len)
		p = malloc(slen - start + 1);
	else
		p = malloc(len + 1);
	if (p == NULL)
		return (NULL);
	while (i < len && s[start + i])
	{
		p[i] = s[start + i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

#include "libft.h"

// dsize is the total capacity of the dst buffer.

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	i;
	size_t	j;
	size_t	slen;
	size_t	dlen;

	slen = strlen(src);
	dlen = strlen(dst);
	if (dsize == 0)
		return (dlen + slen);
	if (dlen == 0)
		return (slen);
	i = dlen;
	j = 0;
	while (src[j] && i < dsize - 1)
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (dlen + slen);
}	

#include "libft.h"

int	main(int argc, char *argv[])
{
	const char	*p1;
	const char	*p2;
	size_t		n;
	char		*ptr;

	if (argc != 4)
		return (0);
	p1 = argv[1];
	p2 = argv[2];
	n = atoi(argv[3]);
	ptr = ft_strnstr(p1, p2, n);
	if (ptr == NULL)
	{
		printf("We return a NULL here");
		return (0);
	}
	printf("%s\n", ptr);
	return (0);
}

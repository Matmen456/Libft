#include "libft.h"

int	main(int argc, char *argv[])
{
	const char	*p1;
	const char	*p2;
	size_t		n;

	if (argc != 4)
		return (0);
	p1 = argv[1];
	p2 = argv[2];
	n = atoi(argv[3]);
	printf("%d\n", strncmp(p1, p2, n));
	return (0);
}

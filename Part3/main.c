#include "libft.h"

int	main(int argc, char *argv[])
{
	if (argc != 2)
		return (0);
	printf("%s\n", ft_itoa(ft_atoi(argv[1])));
	return (0);
}

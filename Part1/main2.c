#include "libft.h"

int	main(int argc, char *argv[])
{
	char	*p;

	if (argc != 2)
		return (0);
	p = ft_calloc(1, ft_atoi(argv[1]));
	if (p == NULL)
	{
		perror("Something happened");
		free(p);
		return (0);
	}
	printf("%s\n", p);
	free(p);
	return (0);
}	

#include "libft.h"

int	main(int argc, char *argv[])
{
	char		*p;
	char const	*s;

	if (argc != 4)
		return (0);
	s = argv[1];
	p = ft_substr(s, ft_atoi(argv[2]), ft_atoi(argv[3]));
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

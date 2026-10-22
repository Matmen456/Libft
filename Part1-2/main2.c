#include "libft.h"

int	main(int argc, char *argv[])
{
	char		*p;
	char const	*s1;
	char const	*set;

	if (argc != 3)
		return (0);
	s1 = argv[1];
	set = argv[2];
	p = ft_strtrim(s1, set);
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

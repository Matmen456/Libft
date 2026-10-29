#include "libft.h"

int	main(int argc, char *argv[])
{
	char	**ptr;
	int		i;

	ptr = NULL;
	if (argc == 3)
	{
		ptr = ft_split(argv[1], argv[2][0]);
		if (ptr)
		{
			i = 0;
			while (ptr[i])
			{
				printf("%s\n", ptr[i]);
				free(ptr[i]);
				printf("\n");
				i++;
			}
			free(ptr);
		}
	}
	return (0);
}

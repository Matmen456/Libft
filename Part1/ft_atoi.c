#include "libft.h"

int	ft_atoi(const char *nptr)
{
	size_t	i;
	int		number;
	int		sign;

	i = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	sign = 1;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -sign;
		i++;
	}
	number = 0;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		number = 10 * number + (nptr[i] - '0');
		i++;
	}
	return (sign * number);
}

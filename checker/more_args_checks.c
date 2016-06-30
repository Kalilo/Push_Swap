#include "checker.h"

int	ft_strlen_int(char *str)
{
	int	k;

	k = 0;
	while (str[k] && ft_isdigit(str[k]) && k < 1001)
		k++;
	return (k);
}

int	check_len(int argv, char ***argc)
{
	int		k;

	k = 1;
	while (k < argv)
	{
		if (ft_strlen_int(*argc[k]) > 10000)
			return (0);
		k++;
	}
	return (1);
}

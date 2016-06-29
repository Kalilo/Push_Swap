#include "checker.h"

int	ft_is_valid(char c)
{
	if (('0' <= c && c <= '9') || c == ' ' || c == '-')
		return (1);
	return (0);
}


int	check_letters(int argv, char ***argc)
{
	int		k;
	int		l;
	
	k = 1;
	while (k < argv)
	{
		l = 0;
		while (*argc[1][l] && *argc[1][k] != '\0')
		{
			if (!(ft_is_valid(argv, argc)))
				return (0);
		}
	}
	return (1);
}

int	check_dup(int argv, char ***argc)
{
	int		k;
	int		l;
	
	k = 1;
	while (k < argv - 1)
	{
		l = k + 1;
		while (l < argv)
		{
			if (ft_atoi(argc[k]) == ft_atoi(argc[l]))
				return (0);
		}
	}
	return (1);
}

int	check_args(int argv, char ***argc)
{
	if (!(check_letters(argv, argc)) || !(check_dup(argv, argc)))
		return (0);
	return (1);
}
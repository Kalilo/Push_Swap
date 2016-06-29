#include "checker.h"

int	main(int argv, char **argc)
{
	if (argv == 1)
		return (1);
	else
	{
		if (!(check_args(argv, argc)))
		{
			ft_putstr("error\n");
			return (1);
		}
		
	}
	return (0);
}
#include "checker.h"

int	main(int argv, char **argc)
{
    t_main  data;
    
	if (argv == 1)
		return (1);
	else
	{
		if (!(check_args(argv, argc)))
		{
			ft_putstr("error\n");
			return (1);
		}
		else
        {
            save_args(data, argv, argc);
            checker(data);
        }
	}
	return (0);
}
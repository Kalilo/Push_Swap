#include "checker.h"

int checker(t_main *data)
{
    char    *input;
    
    display_init(data);
    input = read_input;
    while ()
    return (1);
}

int	main(int argv, char **argc)
{
    t_main  data;
    
	if (argv == 1)
		return (1);
	else
	{
		if (!(check_args(argv, &argc)))
		{
			ft_putstr("error\n");
			return (1);
		}
		else
        {
            if (!(save_args(&data, argv, argc)))
            {
                ft_putstr("error\n");
                return (1);
            }
            checker(&data);
            //display_loop(&data);
        }
	}
	return (0);
}
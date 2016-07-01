#include "checker.h"

int checker(t_main *data)
{
	char	*input;

	display_init(data);
	if !(read_input(&input))
		return (0);
	while (validate_command(input) && !(check_order(data)))
    {
		save_input(data, input);
		do_command(data);
		display_status(data);
		free(input);
		read_input(input);
    }
	if (check_order(data))
		ft_putstr("OK\n");
	else
		ft_putstr("KO\n");
	return (1);
}

int	main(int argv, char **argc)
{
	t_main	data;

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
		}
	}
	return (0);
}

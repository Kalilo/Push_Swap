#include "checker.h"

int	display_init(t_main *data)
{
	int		k;

k = 0;
	ft_putstr("init a and b:\n");
	while (k < S_A)
	{
		ft_putstr(ft_itoa(*L_A[k]));
		ft_putchar('\n');
		k++;
	}
	ft_putstr("_\t_\n");
	ft_putstr("a\tb\n");
	return (1);
}

#include "checker.h"

int	display_init(t_main *data)
{
	int		k;

k = 0;
	ft_putstr("init a and b:\n");
	while (k < S_A)
	{
		ft_itoa(*L_A[k]);
		ft_putchar('\n');
		k++;
	}
	ft_putstr("_\t_\na\tb\n");
	return (1);
}

int	display_status(t_main data)
{
	int		k;
	int		l;
	
	k = 0;
	l = 0;
	while (k < S_A || l < S_B)
	{
		I_P_ANB
		I_P_OA
		I_P_OB
		k++;
		l++;
	}
	ft_putstr("_\t_\na\tb\n");
	return (1);
}

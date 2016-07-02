#include "checker.h"

int	display_init(t_main *data)
{
	int		k;

k = 0;
	ft_putstr("init a and b:\n");
	while (k < S_A)
	{
		ft_printf("%i\n", *L_A[k]);
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
		if (k < S_A && l < S_B)
			ft_printf("%i\t%i\n", L_A[k], L_B[l]);
		else if (k < S_A && !(l < S_B))
			ft_printf("%i\n", L_A[k]);
		else if (!(k < S_A) && l < S_B)
			ft_printf("\t\t%i\n", L_B[l]);
		k++;
		l++;
	}
	ft_putstr("_\t_\na\tb\n");
	return (1);
}

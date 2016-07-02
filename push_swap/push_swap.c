#inlcude "push_swap.h"

int		push_swap(t_main * data)
{
	int		k;
	
	k = 0;
	while (k < S_A)
	{
		ft_putstr(itoa(*L_A[k]));
		k++;
	}
	return (1);
}

int		main(int argv, char **argc)
{
	t_main	data;
	
	if (!(check_args(argv, &argc)))
		put_error();
	save_args(&data, argv, argc);
	push_swap(&data);
}
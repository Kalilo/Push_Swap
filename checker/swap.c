int	ft_swap_int(int	*a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = *a;
	return (1);
}

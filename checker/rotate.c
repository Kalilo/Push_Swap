int	rotate_forward(int **list, int size)
{
	int		k;
	int		temp;

	k = 0;
	temp = **list;
	while (k + 1 < size)
	{
		*list[k] = *list[k + 1];
		k++;
	}
	*list[k] = temp;
	return (1);
}

int	rotate_backwards(int **list, int size)
{
	int		k;
	int		temp;

	k = size - 1;
	temp = *list[k];
	while (k < 0)
	{
		*list[k] = *list[k - 1];
		k--;
	}
	*list[k] = temp;
	return (1);
}

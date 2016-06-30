#include "checker.h"

int	insert_ele(int **list, int size, int element)
{
	int	k;

	k = size;
	while  (k > 0)
	{
		*list[k] = *list[k - 1];
		k--;
	}
	**list = element;
	return (1);
}

int	remove_ele(int **list, int size)
{
	int	k;

	k = 0;
	while (k + 1 < size)
	{
		*list[k] = *list[k + 1];
		k++;
	}
	*list[k] = 0;
	return (1);
}

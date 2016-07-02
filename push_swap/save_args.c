#include "push_swap.h"

int		save_args(t_main *data, int argv, char **argc)
{
	int		k;
	int		l;
	int		m;
	char	**nums;

	k = 1;
	m = 0;
	if ((data->list_a.list = (int **)malloc(sizeof(int) * 10010)) == NULL)
		return (0);
	if ((data->list_b.list = (int **)malloc(sizeof(int) * 10010)) == NULL)
		return (0);
	data->command = 0;
	while (k < argv)
	{
		l = 0;
		nums = ft_strsplit(argc[k]);
		while (**nums && *nums[l] != '\0')
		{
			*L_A[m] = ft_atoi(nums[l]);
			l++;
			m++;
		}
		while (--l > 0)
			free(arr[l]);
		free(arr);
		k++;
	}
	return (1);
}

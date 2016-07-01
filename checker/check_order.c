#include "checker.h"

int	check_order(t_main *data)
{
	int	k;

	k = 0;
	while (k + 1 < S_A)
	{
		if (!(L_A[k] < L_A[k + 1]))
			return (0);
		k++;
	}
	if (S_B != 0)
		return (0);
	return (1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   save_args.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khansman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 14:30:20 by khansman          #+#    #+#             */
/*   Updated: 2016/11/12 14:30:21 by khansman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int		int_data(t_main *data)
{
	if ((L_A = (int *)malloc(sizeof(int) * 4000010)) == NULL)
		return (0);
	if ((L_B = (int *)malloc(sizeof(int) * 4000010)) == NULL)
		return (0);
	data->command = 0;
	return (1);
}

int		save_args(t_main *data, int argv, char **argc)
{
	int		k;
	int		l;
	int		m;
	char	**nums;

	k = 0;
	m = 0;
	if (!(int_data(data)))
		return (0);
	while (++k < argv)
	{
		l = -1;
		nums = ft_strsplit(argc[k], ' ');
		while (nums[++l])
		{
			L_A[m] = ft_atoi(nums[l]);
			m++;
		}
		while (--l >= 0)
			free(nums[l]);
		free(nums);
	}
	S_A = m;
	return (1);
}

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

int		is_verbose(char **args)
{
	int		v;
	int		k;

	v = 0;
	k = 0;
	while (args[++k])
		if (!ft_strcmp(args[k], "-v"))
			v++;
	return (v);
}

int		is_colourful(char **args)
{
	int		v;
	int		k;

	v = 0;
	k = 0;
	while (args[++k])
		if (!ft_strcmp(args[k], "-c"))
			v++;
	return (v);
}

int		int_data(t_main *data)
{
	static int	a[1000001];
	static int	b[1000001];

	L_A = a;
	L_B = b;
	data->command = 0;
	return (1);
}

int		save_args(t_main *data, int argv, char **argc)
{
	int		k;
	int		l;
	int		m;
	char	**nums;

	INIT_VAR;
	if (!(int_data(data)))
		return (0);
	while (++k < argv)
	{
		if (!ft_strcmp(argc[k], "-v") || !ft_strcmp(argc[k], "-c"))
			continue ;
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

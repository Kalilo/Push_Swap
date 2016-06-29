/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggroener <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/22 12:50:43 by ggroener          #+#    #+#             */
/*   Updated: 2016/06/22 17:11:41 by ggroener         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int		valid_args(int	argc, char **argv)
{
	size_t	j;
	int		i;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] != '-' && (argv[i][j] < '0' || argv[i][j] > '9'))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

static int		has_doublons(t_env *env)
{
	int		i;
	int		j;

	i = 0;
	while (i < env->stack_a_size)
	{
		j = 0;
		while (j < env->stack_a_size)
		{
			if (i != j && env->stack_a[i] == env->stack_a[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

static void		fill_stack(int *stack, int argc, char ** argv)
{
	int		i;

	i = 1;
	while (i < argc)
	{
		stack[argc - i - 1] = ft_atoi(argv[i]);
		i++;
	}
}

static void		parse_min_max(t_env *env)
{
	int		i;

	env->min
}

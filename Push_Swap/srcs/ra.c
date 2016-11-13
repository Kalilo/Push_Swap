/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggroener <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/02 15:38:35 by ggroener          #+#    #+#             */
/*   Updated: 2016/07/02 15:38:36 by ggroener         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_env *env)
{
	int		i;
	int		tmp;

	if (env->stack_a_size > 1)
	{
		env->count++;
		tmp = env->stack_a[env->stack_a_size - 1];
		i = env->stack_a_size - 1;
		while (i > 0)
		{
			env->stack_a[i] = env->stack_a[i - 1];
			i--;
		}
		env->stack_a[0] = tmp;
		ft_putstr((env->colours) ? "\033[32;1mRA " : "RA\n");
	}
}

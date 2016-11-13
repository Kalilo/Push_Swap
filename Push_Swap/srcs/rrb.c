/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggroener <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/02 15:39:38 by ggroener          #+#    #+#             */
/*   Updated: 2016/07/02 15:39:40 by ggroener         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrb(t_env *env)
{
	int		i;
	int		tmp;

	if (env->stack_b_size > 1)
	{
		env->count++;
		tmp = env->stack_b[0];
		i = 0;
		while (i < env->stack_b_size - 1)
		{
			env->stack_b[i] = env->stack_b[i + 1];
			i++;
		}
		env->stack_b[env->stack_b_size - 1] = tmp;
		ft_putstr((env->colours) ? "\033[36;1mRRB " : "RRB ");
	}
}

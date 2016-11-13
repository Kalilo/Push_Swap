/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggroener <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/02 15:38:15 by ggroener          #+#    #+#             */
/*   Updated: 2016/07/02 15:38:17 by ggroener         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_a(t_env *env)
{
	int	i;

	i = 0;
	while (i < env->stack_a_size)
	{
		ft_putnbr_fd(env->stack_a[i], (VER) ? 1 : 0);
		ft_putchar_fd(' ', (VER) ? 1 : 0);
		i++;
	}
	ft_putchar_fd('\n', (VER) ? 1 : 0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khansman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 14:29:30 by khansman          #+#    #+#             */
/*   Updated: 2016/11/12 14:29:32 by khansman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	display_init(t_main *data)
{
	int		k;

	k = 0;
	ft_putstr((COL) ? "\e[36m" : "");
	ft_putstr("init a and b:\n");
	while (k < S_A)
	{
		ft_putnbr(L_A[k]);
		ft_putchar('\n');
		k++;
	}
	ft_putstr("_\t_\na\tb\n\n");
	ft_putstr((COL) ? "\e[0m" : "");
	return (1);
}

int	display_status(t_main *data)
{
	int		k;

	k = -1;
	ft_putstr((COL) ? "\e[34m" : "");
	while (++k < S_A || k < S_B)
		if (k < S_A && k < S_B)
		{
			ft_putnbr(L_A[k]);
			ft_putchar('\t');
			ft_putnbr(L_B[k]);
			ft_putchar('\n');
		}
		else if (k < S_A && !(k < S_B))
		{
			ft_putnbr(L_A[k]);
			ft_putchar('\n');
		}
		else if (!(k < S_A) && k < S_B)
		{
			ft_putchar('\t');
			ft_putnbr(L_B[k]);
			ft_putchar('\n');
		}
	ft_putstr((COL) ? "_\t_\na\tb\n\n\e[0m" : "_\t_\na\tb\n\n");
	return (1);
}

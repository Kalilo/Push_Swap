/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   more_args_checks.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khansman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/29 14:24:09 by khansman          #+#    #+#             */
/*   Updated: 2016/06/29 15:09:56 by khansman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	ft_strlen_int(char *str)
{
	int	k;

	k = 0;
	while (str[k] && ft_isdigit(str[k]) && k < 1001)
		k++;
	return (k);
}

int	check_len(int argv, char ***argc)
{
	int		k;

	k = 1;
	while (k < argc)
	{
		if (ft_strlen_num(*argc[k]) > 10000)
			return (0);
		k++;
	}
	return (1);
}

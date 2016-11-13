/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khansman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 14:29:07 by khansman          #+#    #+#             */
/*   Updated: 2016/11/12 14:32:55 by khansman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	checker(t_main *data)
{
	char	*input;

	input = ft_strnew(20);
	if (data->verbose)
		display_init(data);
	if (!(read_input(&input)))
		return (0);
	while (validate_command(input) && !(check_order(data)))
	{
		save_input(data, input);
		do_command(data);
		if (data->verbose)
			display_status(data);
		if (check_order(data))
			break ;
		if (!(read_input(&input)))
			return (0);
	}
	free(input);
	if (check_order(data))
		ft_putstr((COL) ? "\e[32mOK\n\e[0m" : "OK\n");
	else
		ft_putstr((COL) ? "\e[31mKO\n\e[0m" : "KO\n");
	return (1);
}

int	sorted_args(int av, char **ac)
{
	int		k;
	int		l;
	int		tmp1;
	int		tmp2;

	k = 0;
	while (++k < av)
	{
		l = k;
		tmp1 = ft_atoi(ac[k]);
		while (++l < av)
		{
			tmp2 = ft_atoi(ac[l]);
			if (tmp1 > tmp2)
				return (0);
		}
	}
	return (1);
}

int	main(int argv, char **argc)
{
	t_main	data;

	ft_bzero(&data, sizeof(t_main));
	data.verbose = is_verbose(argc);
	data.colours = is_colourful(argc);
	if (argv == 1)
		return (1);
	else if (sorted_args(argv, argc))
		ft_putstr((data.colours) ? "\e[32mOK\n\e[0m" : "OK\n");
	else
	{
		if (!(check_args(argv, argc)))
			return (1);
		else if (!(save_args(&data, argv, argc)) || !(checker(&data)))
		{
			ft_putstr((data.colours) ? "\e[31merror\e[0m" : "error\n");
			return (1);
		}
	}
	return (0);
}

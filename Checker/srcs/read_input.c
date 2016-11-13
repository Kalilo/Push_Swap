/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_input.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khansman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 14:30:06 by khansman          #+#    #+#             */
/*   Updated: 2016/11/12 14:30:07 by khansman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	read_input(char **str)
{
	int		k;
	char	buff;

	k = -1;
	if (!read(0, &buff, 1))
		return (0);
	while (buff == ' ' || buff == '\n' || buff == '\0' || buff == '\r')
		if (!read(0, &buff, 1))
			return (0);
	while (buff != ' ' && buff != '\n' && buff != '\0' && buff != '\r'
			&& k < 5)
	{
		str[0][++k] = buff;
		if (!read(0, &buff, 1))
			return (0);
	}
	str[0][++k] = '\0';
	*str = ft_strtolower(*str);
	return (1);
}

int	save_swap(t_main *data, char *str)
{
	if (not_end(*str) && not_end(str[1]) && *str == 's')
	{
		if (str[1] == 'a')
			CM = CMD_SA;
		else if (str[1] == 'b')
			CM = CMD_SB;
		else if (str[1] == 's')
			CM = CMD_SS;
		else
			CM = 0;
	}
	else if (not_end(*str) && not_end(str[1]) && *str == 'p')
	{
		if (str[1] == 'a')
			CM = CMD_PA;
		else if (str[1] == 'b')
			CM = CMD_PB;
		else
			CM = 0;
	}
	else
		return (0);
	return (1);
}

int	save_rotate(t_main *data, char str[])
{
	if (str[0] != '\0' && str[1] != '\0')
	{
		if (str[1] == 'r')
		{
			if (!(not_end(str[2])))
				CM = CMD_RR;
			else if (not_end(str[2]) && str[2] == 'a')
				CM = CMD_RRA;
			else if (not_end(str[2]) && str[2] == 'b')
				CM = CMD_RRB;
			else if (not_end(str[2]) && str[2] == 'r')
				CM = CMD_RRR;
		}
		else if (str[1] == 'a')
			CM = CMD_RA;
		else if (str[1] == 'b')
			CM = CMD_RB;
		else
			CM = 0;
	}
	else
		return (0);
	return (1);
}

int	save_input(t_main *data, char *str)
{
	if (*str == 's' || *str == 'p')
		return (save_swap(data, str));
	else if (*str == 'r')
		return (save_rotate(data, str));
	return (0);
}

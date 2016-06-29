/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khansman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/29 15:39:39 by khansman          #+#    #+#             */
/*   Updated: 2016/06/29 15:49:54 by khansman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	commands(int **list_a, int **list_b, int command)
{
/*	if (command < 6)
		command_forward(int **list_a, int **list_b, int command);*/
	if (command == CMD_SA)
		ft_swap_int(list_a[0], list_a[1]);
	else if (command == CMD_SB)
		ft_swap_int(list_b[0], list_b[1]);
	else if (command == CMD_SS)
	{
		ft_swap_int(list_a[0], list_a[1]);
	}
	return (1);
}

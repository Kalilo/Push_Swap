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

//int	commands(int **list_a, int **list_b, int command)
int     commands_forwards(t_main *data)
{
/*	if (command < 6)
		command_forward(int **list_a, int **list_b, int command);*/
	if (data->command == CMD_SA)
		ft_swap_int(data->list_a.list[0], data->list_a.list[1]);
	else if (data->command == CMD_SB)
		ft_swap_int(data->list_b.list[0], list_b.list[1]);
	else if (data->command == CMD_SS)
	{
		ft_swap_int(data->list_a.list[0], data->list_a.list[1]);
        ft_swap_int(data->list_b.list[0], data->list_b.list[1]);
	}
    else if (command == CMD_PA)
    {
        inse
    }
	return (1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khansman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 14:29:14 by khansman          #+#    #+#             */
/*   Updated: 2016/11/12 14:34:40 by khansman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int		do_swap(t_main *data)
{
	if (CM == CMD_SA && S_A > 1)
		ft_swap_int(&L_A[0], &L_A[1]);
	else if (CM == CMD_SB && S_B > 1)
		ft_swap_int(&L_B[0], &L_B[1]);
	else if (CM == CMD_SS)
	{
		if (S_A > 1)
			ft_swap_int(&L_A[0], &L_A[1]);
		if (S_B > 1)
			ft_swap_int(&L_B[0], &L_B[1]);
	}
	else if (CM == CMD_PA && S_B > 0)
	{
		S_A += insert_ele(&L_A, S_A, L_B[0]);
		S_B -= remove_ele(&L_B, S_B);
	}
	else if (CM == CMD_PB && S_A > 0)
	{
		S_B += insert_ele(&L_B, S_B, L_A[0]);
		S_A -= remove_ele(&L_A, S_A);
	}
	else
		return (0);
	return (1);
}

int		do_rotate(t_main *data)
{
	if (CM == CMD_RA && S_A > 1)
		rotate_forward(&L_A, S_A);
	else if (CM == CMD_RB && S_B > 1)
		rotate_forward(&L_B, S_B);
	else if (CM == CMD_RR)
	{
		if (S_A > 1)
			rotate_forward(&L_A, S_A);
		if (S_B > 1)
			rotate_forward(&L_B, S_B);
	}
	else if (CM == CMD_RRA && S_A > 1)
		rotate_backwards(&L_A, S_A);
	else if (CM == CMD_RRB && S_B > 1)
		rotate_backwards(&L_B, S_B);
	else if (CM == CMD_RRR)
	{
		if (S_A > 1)
			rotate_backwards(&L_A, S_A);
		if (S_B > 1)
			rotate_backwards(&L_B, S_B);
	}
	else
		return (0);
	return (1);
}

int		do_command(t_main *data)
{
	if (CM < CMD_RA)
		return (do_swap(data));
	else if (CM <= CMD_RRR)
		return (do_rotate(data));
	return (0);
}

#include "checker.h"

int		do_swap(t_main *data)
{
	if (CM == CMD_SA)
		ft_swap_int(L_A[0], L_A[1]);
	else if (CM == CMD_SB)
		ft_swap_int(L_B[0], L_B[1]);
	else if (CM == CMD_SS)
	{
		ft_swap_int(L_A[0], L_A[1]);
		ft_swap_int(L_B[0], L_B[1]);
	}
	else if (CM == CMD_PA)
	{
		S_A += insert_ele(L_A, S_A, *L_B[1]);
		S_B -= remove_ele(L_B, S_B);
	}
	else if (CM == CMD_PB)
	{
		S_B += insert_ele(L_B, S_B, *L_A[1]);
		S_A -= remove_ele(L_A, S_A);
	}
	else
		return (0);
	return (1);
}

int			do_rotate(t_main *data)
{
	if (CM == CMD_RA)
		rotate_forward(L_A, S_A);
	else if (CM == CMD_RB)
		rotate_forward(L_B, S_B);
	else if (CM == CMD_RR)
	{
		rotate_forward(L_A, S_A);
		rotate_forward(L_B, S_B);
	}
	else if (CM == CMD_RRA)
		rotate_backwards(L_A, S_A);
	else if (CM == CMD_RRB)
		rotate_backwards(L_B, S_B);
	else if (CM == CMD_RRR)
	{
		rotate_backwards(L_A, S_A);
		rotate_backwards(L_B, S_B);
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

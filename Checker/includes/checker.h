/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khansman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 14:25:35 by khansman          #+#    #+#             */
/*   Updated: 2016/11/12 14:26:13 by khansman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

/*
** ----------\
** Includes   |
** ----------/
*/

# include <unistd.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft.h"

/*
** ----------\
** Defines    |
** ----------/
*/

/*
** Commands
*/
# define CMD_SA   1
# define CMD_SB   2
# define CMD_SS   3
# define CMD_PA   4
# define CMD_PB   5
# define CMD_RA   6
# define CMD_RB   7
# define CMD_RR   8
# define CMD_RRA  9
# define CMD_RRB 10
# define CMD_RRR 11

/*
** Shorthand
*/
# define L_A data->list_a.list
# define L_B data->list_b.list
# define S_A data->list_a.size
# define S_B data->list_b.size
# define CM  data->command

/*
** Shortened code
*/
# define P_TAB ft_putchar('\t');
# define P_NL ft_putchar('\n');
# define P_A ft_itoa(*L_A[k]);
# define P_B ft_itoa(*L_B[k]);
# define P_ANB P_A P_TAB P_B P_NL
# define P_OA P_A P_NL
# define P_OB P_TAB P_TAB P_B P_NL

# define I_P_ANB if (k < S_A && l < S_B) {P_ANB}
# define I_P_OA else if (k < S_A && !(l < S_B)) {P_OA}
# define I_P_OB else if (!(k < S_A) && l < S_B) {P_OB}

# define PUT_ANB ft_putnbr(L_A[k]);ft_putchar('\t');ft_putnbr(L_B[k])
# define PUT_B ft_putchar('\t');ft_putnbr(L_B[k])

/*
** ----------\
** Structures |
** ----------/
*/

typedef struct	s_int_list
{
	int			*list;
	int			size;
}				t_int_list;

typedef struct	s_main
{
	t_int_list	list_a;
	t_int_list	list_b;
	int			command;
}				t_main;

/*
** ----------\
** Prototypes |
** ----------/
*/

/*
** check_args.c
*/
int				ft_is_valid(char c);
int				check_letters(int argv, char **argc);
int				check_dup(int argv, char **argc);
int				check_double(int argv, char **argc);
int				check_args(int argv, char **argc);
/*
** check_order.c
*/
int				check_order(t_main *data);
/*
** checker.c
*/
int				checker(t_main *data);
/*
** commands.c
*/
int				do_swap(t_main *data);
int				do_rotate(t_main *data);
int				do_command(t_main *data);
/*
** display.c
*/
int				display_init(t_main *data);
int				display_status(t_main *data);
/*
** ft_atoi_isdigit.c
*/
int				ft_atoi_isdigit(const char *str);
/*
** insert_ele.c
*/
int				insert_ele(int *list[], int size, int element);
int				remove_ele(int **list, int size);
/*
** more_args_checks.c
*/
int				ft_strlen_int(char *str);
int				check_len(int argv, char ***argc);
/*
** read_input.c
*/
int				read_input(char *str[]);
int				save_swap(t_main *data, char *str);
int				save_rotate(t_main *data, char str[]);
int				save_input(t_main *data, char *str);
/*
** rotate.c
*/
int				rotate_forward(int *list[], int size);
int				rotate_backwards(int *list[], int size);
/*
** save_args.c
*/
int				int_data(t_main *data);
int				save_args(t_main *data, int argv, char **argc);
/*
** swap.c
*/
int				ft_swap_int(int	*a, int *b);
/*
** validate_command.c
*/
int				not_end(char c);
int				validate_command(char *str);
/*
**                                /----------\                                **
** ----- ----- ----- ----- ----- |  The End   | ----- ----- ----- ----- ----- **
**                                \----------/                                **
*/
#endif

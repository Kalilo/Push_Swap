#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/*Includes*/
# include <unistd.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft.h"

/*defines*/
# define CMD_SA 1
# define CMD_SB 2
# define CMD_SS 3
# define CMD_PA 4
# define CMD_PB 5
# define CMD_RA 6
# define CMD_RB 7
# define CMD_RR 8
# define CMD_RRA 9
# define CMD_RRB 10
# define CMD_RRR 11

	/*Shorthand*/
# define L_A data->list_a.list
# define L_B data->list_b.list
# define S_A data->list_a.size
# define S_B data->list_b.size
# define CM data->command

/*Structures*/
	/*Int Lists*/
typedef struct	s_int_list
{
	int			**list;
	int			size;
}				t_int_list;
	/*Main Data*/
typedef struct	s_main
{
	t_int_list	list_a;
	t_int_list	list_b;
	int			command;
}				t_main;

/*Prototypes*/
	/*check_args.c*/
int		check_args(int argv, char ***argc);
int		check_dup(int argv, char ***argc);
int		check_letters(int argv, char ***argc);
int		ft_is_valid(char c);
int		check_double(int argv, char ***argc);
	/*save_args.c*/
int		save_args(t_main *data, int argv, char **argc);
	/*check_args.c*/
int		check_args(int argv, char ***argc);
int		check_dup(int argv, char ***argc);
int		check_letters(int argv, char ***argc);
int		ft_is_valid(char c);
int		check_double(int argv, char ***argc);

#endif

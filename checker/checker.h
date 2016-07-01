#ifndef CHECKER_H
# define CHECKER_H

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
	/*more_args_checks.c*/
int		ft_strlen_int(char *str);
int		check_len(int argv, char ***argc);
	/*ft_swap.c*/
int		ft_swap_int(int	*a, int *b);
	/*rotate.c*/
int		rotate_forward(int **list, int size);
int		rotate_backwards(int **list, int size);
	/*insert_ele.c*/
int		insert_ele(int **list, int size, int element);
int		remove_ele(int **list, int size);
	/*commands.c*/
int		do_swap(t_main *data);
int		do_rotate(t_main *data);
int		do_command(t_main *data);
	/*save_args.c*/
int		save_args(t_main *data, int argv, char **argc);
	/*display.c*/
int		display_init(t_main *data);
int		display_status(t_main);
	/*check_order.c*/
int		check_order(t_main *data);
	/*validate_command.c*/
int		not_end(char c);
int		validate_command(char *str);
	/*read_input.c*/
int		read_input(**str);
int		save_swap(t_main *data, char *str);
int		save_rotate(t_main *data, char * str);
int		save_input(t_main *data, char *str);

#endif

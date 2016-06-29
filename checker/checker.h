#ifndef AWESOME_CHECKER
#define AWESOME_CHECKER

/*Includes*/
#include <unistd.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdlib.h>
#include "libft.h"
/*Prototypes*/
	/*check_args.c*/
int	check_args(int argv, char ***argc);
int	check_dup(int argv, char ***argc);
int	check_letters(int argv, char ***argc);
int	ft_is_valid(char c);

#endef
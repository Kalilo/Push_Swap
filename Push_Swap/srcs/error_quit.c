/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_quit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggroener <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/02 15:32:23 by ggroener          #+#    #+#             */
/*   Updated: 2016/07/02 15:47:14 by ggroener         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_quit(char *error_message)
{
	ft_putstr_fd("\033[91m An error happened: ", 2);
	ft_putendl_fd(error_message, 2);
	ft_putstr_fd("\033[0m", 2);
	exit(-1);
}

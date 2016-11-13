/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khansman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 14:30:10 by khansman          #+#    #+#             */
/*   Updated: 2016/11/12 14:30:11 by khansman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	rotate_forward(int *list[], int size)
{
	int		k;
	int		temp;

	k = 0;
	temp = list[0][0];
	while (k + 1 < size)
	{
		list[0][k] = list[0][k + 1];
		k++;
	}
	list[0][k] = temp;
	return (1);
}

int	rotate_backwards(int *list[], int size)
{
	int		k;
	int		temp;

	k = size - 1;
	temp = list[0][k];
	while (k > 0)
	{
		list[0][k] = list[0][k - 1];
		k--;
	}
	list[0][k] = temp;
	return (1);
}

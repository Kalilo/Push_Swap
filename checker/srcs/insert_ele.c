/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_ele.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khansman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 14:29:43 by khansman          #+#    #+#             */
/*   Updated: 2016/11/12 14:29:44 by khansman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	insert_ele(int *list[], int size, int element)
{
	int	k;

	k = size;
	while (0 < k)
	{
		list[0][k] = list[0][k - 1];
		k--;
	}
	list[0][0] = element;
	return (1);
}

int	remove_ele(int **list, int size)
{
	int	k;

	if (size < 1)
		return (0);
	k = 0;
	while (k + 1 < size)
	{
		list[0][k] = list[0][k + 1];
		k++;
	}
	list[0][k] = 0;
	return (1);
}

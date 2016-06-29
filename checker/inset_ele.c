/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inset_ele.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khansman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/29 15:25:28 by khansman          #+#    #+#             */
/*   Updated: 2016/06/29 15:37:48 by khansman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	insert_ele(int **list, int size, int element)
{
	int	k;

	k = size;
	while  (k > 0)
	{
		*list[k] = *list[k - 1];
		k--;
	}
	**list = element;
	return (1);
}

int	remove_ele(int **list, int size, int element)
{
	int	k;

	k = 0;
	while (k + 1 < size)
	{
		*list[k] = *list[k + 1];
		k++;
	}
	*list[k] = 0;
	return (1);
}

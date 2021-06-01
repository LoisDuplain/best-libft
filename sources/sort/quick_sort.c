/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 14:19:27 by lduplain          #+#    #+#             */
/*   Updated: 2021/06/01 14:25:07 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	swap_values(int array[], int index_a, int index_b)
{
	int	temp;

	temp = array[index_a];
	array[index_a] = array[index_b];
	array[index_b] = temp;
}

void	quick_sort(int array[], int start, int end)
{
	int	left;
	int	right;
	int	pivot;

	left = start - 1;
	right = end + 1;
	pivot = array[start];
	if (start >= end)
		return ;
	while (1)
	{
		while (array[--right] > pivot)
			;
		while (array[++left] < pivot)
			;
		if (left < right)
			swap_values(array, left, right);
		else
			break ;
	}
	quick_sort(array, start, right);
	quick_sort(array, right + 1, end);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 14:19:27 by lduplain          #+#    #+#             */
/*   Updated: 2021/06/01 16:55:49 by lduplain         ###   ########.fr       */
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

void	quick_sort(int array[], int index_start, int index_end)
{
	int	left;
	int	right;
	int	pivot;

	left = index_start - 1;
	right = index_end + 1;
	pivot = array[index_start];
	if (index_start >= index_end)
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
	quick_sort(array, index_start, right);
	quick_sort(array, right + 1, index_end);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ulltoa_ibase.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 10:41:12 by lduplain          #+#    #+#             */
/*   Updated: 2021/11/03 12:57:24 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*fill_result(unsigned long long nbr, int ibase, char *result,	\
	int len)
{
	while (nbr != 0)
	{
		if ((nbr % ibase) < 10)
			result[len - 1] = (nbr % ibase) + 48;
		else
			result[len - 1] = (nbr % ibase) + 87;
		nbr /= ibase;
		len--;
	}
	return (result);
}

char	*ft_ulltoa_ibase(unsigned long long number, int ibase,	\
	t_bool uppercase)
{
	char				*result;
	int					length;

	result = 0;
	length = 0;
	if (number == 0)
		return (ft_strdup("0"));
	length = ft_ull_ibase_length(number, ibase);
	result = malloc(sizeof(char) * (length + 1));
	if (!result)
		return (0);
	result[length] = '\0';
	result = fill_result(number, ibase, result, length);
	if (uppercase)
		result = ft_toupper(result);
	return (result);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ctostr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 17:25:31 by lduplain          #+#    #+#             */
/*   Updated: 2021/11/03 13:01:19 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_ctostr(char c)
{
	char	*result;

	result = ft_strdup(" ");
	if (result != NULL)
		result[0] = c;
	return (result);
}

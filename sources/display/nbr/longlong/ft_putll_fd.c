/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putll_fd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 14:40:08 by lduplain          #+#    #+#             */
/*   Updated: 2021/02/08 17:13:04 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putll_fd(int fd, long long number)
{
	if (number < 0)
	{
		ft_putchar_fd(fd, '-');
		ft_putull_fd(fd, (unsigned long long) - number);
		return ;
	}
	ft_putull_fd(fd, (unsigned long long)number);
}

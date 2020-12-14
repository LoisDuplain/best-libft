/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 14:05:33 by lduplain          #+#    #+#             */
/*   Updated: 2020/12/14 14:08:16 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int fd, long long number)
{
	if (number < 0)
	{
		ft_putchar_fd(fd, '-');
		ft_putnbr_pos_fd(fd, (unsigned long long)-number);
		return ;
	}
	ft_putnbr_pos_fd(fd, (unsigned long long)number);
}

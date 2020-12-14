/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pos_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 13:25:12 by lduplain          #+#    #+#             */
/*   Updated: 2020/12/14 13:47:50 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_pos_fd(int fd, unsigned long long number)
{
	if (number / 10 > 0)
		ft_putnbr_pos_fd(fd, number / 10);
	ft_putchar_fd(fd, number % 10 + 48);
}

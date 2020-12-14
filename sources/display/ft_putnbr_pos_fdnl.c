/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pos_fdnl.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 13:50:02 by lduplain          #+#    #+#             */
/*   Updated: 2020/12/14 13:50:52 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_pos_fdnl(int fd, unsigned long long number)
{
	ft_putnbr_pos_fd(fd, number);
	ft_putchar_fd(fd, '\n');
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putull_fdnl.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 13:50:02 by lduplain          #+#    #+#             */
/*   Updated: 2020/12/14 14:36:42 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putull_fdnl(int fd, unsigned long long number)
{
	ft_putull_fd(fd, number);
	ft_putchar_fd(fd, '\n');
}

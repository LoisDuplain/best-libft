/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putull_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 14:40:01 by lduplain          #+#    #+#             */
/*   Updated: 2020/12/14 14:40:03 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putull_fd(int fd, unsigned long long number)
{
	if (number / 10 > 0)
		ft_putull_fd(fd, number / 10);
	ft_putchar_fd(fd, number % 10 + 48);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnchar_fdnl.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 18:12:07 by lduplain          #+#    #+#             */
/*   Updated: 2020/12/15 18:13:10 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnchar_fdnl(int fd, char c, size_t n)
{
	ft_putnchar_fd(fd, c, n);
	ft_putchar_fd(fd, '\n');
}

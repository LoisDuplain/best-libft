/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fdnl.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 12:26:29 by lduplain          #+#    #+#             */
/*   Updated: 2020/12/17 13:32:56 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_putchar_fdnl(int fd, char c)
{
	ft_putchar_fd(fd, c);
	ft_putchar_fd(fd, '\n');
	return (2);
}

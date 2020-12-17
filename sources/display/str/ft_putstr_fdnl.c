/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fdnl.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 12:21:48 by lduplain          #+#    #+#             */
/*   Updated: 2020/12/17 13:37:15 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_putstr_fdnl(int fd, char *str)
{
	size_t	len;

	len = ft_putstr_fd(fd, str);
	ft_putchar_fd(fd, '\n');
	return (len + 1);
}

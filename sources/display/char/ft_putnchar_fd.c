/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnchar_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 16:07:00 by lduplain          #+#    #+#             */
/*   Updated: 2020/12/17 13:34:22 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_putnchar_fd(int fd, char c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		ft_putchar_fd(fd, c);
		i++;
	}
	return (n);
}

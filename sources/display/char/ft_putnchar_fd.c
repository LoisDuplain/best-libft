/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnchar_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 16:07:00 by lduplain          #+#    #+#             */
/*   Updated: 2020/12/15 16:08:06 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnchar_fd(int fd, char c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		ft_putchar_fd(fd, c);
		i++;
	}
}
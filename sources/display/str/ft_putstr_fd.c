/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 14:00:59 by lduplain          #+#    #+#             */
/*   Updated: 2020/12/17 13:36:08 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_putstr_fd(int fd, char *str)
{
	size_t	len;

	len = ft_strlen(str);
	write(fd, str, len);
	return (len);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_file_lines.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 16:39:05 by lduplain          #+#    #+#             */
/*   Updated: 2021/01/21 16:41:14 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

ssize_t	ft_count_file_lines(char *path)
{
	t_file			*file;
	t_read_status	read_status;
	ssize_t			counter;

	file = ft_open_file(path, O_RDONLY);
	counter = 0;
	while ((read_status = ft_read_next_line(file)))
		counter++;
	ft_close_file(file);
	if (read_status == read_fail)
		return (read_fail);
	return (counter + 1);
}

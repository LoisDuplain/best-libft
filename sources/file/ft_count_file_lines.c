/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_file_lines.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/21 16:39:05 by lduplain          #+#    #+#             */
/*   Updated: 2021/03/24 12:39:55 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

ssize_t	ft_count_file_lines(char *path)
{
	t_file			*file;
	ssize_t			counter;
	t_read_status	read_status;

	file = ft_open_file(path, O_RDONLY);
	if (file == NULL)
		return (read_fail);
	counter = 0;
	read_status = ft_read_next_line(file);
	while (read_status)
	{
		counter++;
		read_status = ft_read_next_line(file);
	}
	ft_close_file(file);
	if (read_status == read_fail)
		return (read_fail);
	return (counter + 1);
}

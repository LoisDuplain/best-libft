/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 12:23:00 by lduplain          #+#    #+#             */
/*   Updated: 2020/12/10 12:23:07 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_file	*ft_open_file(const char *path, int open_flag)
{
	t_file	*file;
	int		fd;

	fd = open(path, open_flag);
	if (fd == -1)
		return (NULL);
	if (!(file = ft_calloc(1, sizeof(t_file))))
		return (NULL);
	file->c_fd = fd;
	file->c_file_path = ft_strdup(path);
	file->readed_line = 0;
	file->p_backup = 0;
	return (file);
}

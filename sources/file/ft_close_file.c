/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_close_file.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 17:07:19 by lduplain          #+#    #+#             */
/*   Updated: 2021/02/18 15:22:58 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool	ft_close_file(t_file *file)
{
	if (close(file->c_fd) == 1)
		return (FALSE);
	file->c_fd = 0;
	if (file->c_file_path != 0)
		free(file->c_file_path);
	if (file->p_backup != 0)
		free(file->p_backup);
	if (file->readed_line != 0)
		free(file->readed_line);
	free(file);
	return (TRUE);
}

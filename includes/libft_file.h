/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_file.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 14:58:19 by lduplain          #+#    #+#             */
/*   Updated: 2021/05/12 12:40:02 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_FILE_H
# define LIBFT_FILE_H

/*
**	START CUSTOM INCLUDES
*/

# include "libft.h"

/*
**	END CUSTOM INCLUDES
*/

/*
**	START DEFINES
*/
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE	32
# endif

typedef struct s_file
{
	int		c_fd;
	char	*c_file_path;
	char	*readed_line;
	char	*p_backup;
}	t_file;

typedef enum e_file_read_status
{
	read_success = 1,
	read_success_eof = 0,
	read_fail = -1,
}	t_read_status;
/*
**	END DEFINES
*/

/*
**	Open file by file path.
**	./file/ft_open_file.c
**	Return:
**	(t_file)file structure.
**	New (t_file)file structure containing:
**	file descriptor(fd),
**	file path(const char *),
**	readed line(char *).
*/
t_file				*ft_open_file(const char *path, int open_flag);

/*
**	Read the next line contained in file (t_file)file.
**	./file/read_file.c
**	Return:
**	(t_read_status)read status.
**	1  -> If new line readed teminated by new line.
**	0  -> If new line readed teminated by end of file.
**	-1 -> If failed to read new line.
*/
t_read_status		ft_read_next_line(t_file *file);

/*
**	Close file (t_file)file.
**	./file/ft_close_file.c
**	Return:
**	(t_bool)result of operation.
**	(t_bool)TRUE if file successfully closed.
**	(t_bool)FALSE if closing failed.
*/
t_bool				ft_close_file(t_file *file);

/*
**	Count lines in file located at path.
**	./file/ft_count_file_lines.c
**	Return:
**	(ssize_t)number of lines|-1 when read fail.
*/
ssize_t				ft_count_file_lines(char *path);

/*
**	Create char** file_content to contain a file content.
**	./file/ft_create_file_content.c
**	Return:
**	(char **)file_content. Every (char *) contained in
**	(char **)file_content are set to NULL.
*/
char				**ft_create_file_content(char *path);

/*
**	Destroy and free (char **)file_content.
**	./file/ft_destroy_file_content.c
**	Return:
**	NULL.
*/
void				*ft_destroy_file_content(char ***file_content);

/*
**	Get the file content located at (char *)path in a (char **)file_content.
**	./file/ft_get_file_content.c
**	Return:
**	(char **)file_content.
**	NULL if file can't be read (Malloc (t_file) failed, cannont be
**	opened or something else).
**	NULL if line duplication failed.
*/
char				**ft_get_file_content(char *path);

/*
**	Fill the file content (char **)file_content with the content of
**	file (t_file *)file.
**	./file/ft_fill_file_content.c
**	Return:
**	(char **)file_content.
**	NULL if failed.
*/
char				**ft_fill_file_content(char **file_content, t_file *file);

#endif

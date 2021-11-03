/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_strings.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 13:55:55 by lduplain          #+#    #+#             */
/*   Updated: 2021/11/03 12:56:53 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_STRINGS_H
# define LIBFT_STRINGS_H

/*
**	START CUSTOM INCLUDES
*/

# include "libft.h"

/*
**	END CUSTOM INCLUDES
*/

/*
**	Get the length of string str.
**	./strings/ft_strlen.c
*/
size_t	ft_strlen(const char *str);

/*
**	Get the index of char c in string str.
**	./strings/ft_find_char.c
**
**	Return:
**	index of char found or -1 if char cannot be found.
*/
ssize_t	ft_find_char(char *str, char c);

/*
**	Check if string str contains char c.
**	./strings/ft_contains_char.c
**
**	Return:
**	(t_bool)TRUE if char was found.
**	(t_bool)FALSE if char wasn't found.
*/
t_bool	ft_contains_char(char *str, char c);

/*
**	Copy (char *)destination in (char *)source.
**	String is null terminated.
**	If destination length is over than source length
**	the destination will be truncated.
**	./strings/ft_strcpy.c
**
**	Return:
**	(size_t)source_length.
**	The length of the (char *)source.
*/
size_t	ft_strcpy(const char *source, char *destination);

/*
**	Append two strings (s1 and s2) in a new one.
**	Free s1 if free_s1 is TRUE.
**	Free s2 if free_s2 is TRUE.
**	Return value is null terminated.
**	./strings/ft_append_strs.c
**
**	Return:
**	(char *)result.
**	The string containing s1 and s2, null terminated.
*/
char	*ft_append_strs(char *s1, char *s2, t_bool free_s1, t_bool free_s2);

/*
**	Duplicate n characters of string str.
**	Set it in new allocatec string.
**	String is null terminated.
**	./strings/ft_strndup.c
**
**	Return:
**	(char *)result.
**	The duplicated string.
*/
char	*ft_strndup(const char *str, size_t n, t_bool free_str);

/*
**	Duplicate string str.
**	Set it in new allocatec string.
**	String is null terminated.
**	./strings/ft_strdup.c
**
**	Return:
**	(char *)result.
**	The duplicated string.
*/
char	*ft_strdup(const char *str);

/*
**	Convert char c to mallocated string.
**	./strings/ft_ctostr.c
*/
char	*ft_ctostr(char c);

/*
**	Uppercase all characters in string str.
**	./strings/ft_toupper.c
*/
char	*ft_toupper(char *str);

/*
**	Lowercase all characters in string str.
**	./strings/ft_toupper.c
*/
char	*ft_tolower(char *str);

/*
**	Append string back of string to_mult n times.
**	(!WARNING) if to_mult is mallocated, ft_strmult_* don't free it.
**	./strings/ft_strmult_front.c
*/
char	*ft_strmult_front(	\
	char *to_mult,			\
	char *back,				\
	size_t n,				\
	t_bool free_back);

/*
**	Append string front of string to_mult n times.
**	(!WARNING) if to_mult is mallocated, ft_strmult_* don't free it.
**	./strings/ft_strmult_back.c
*/
char	*ft_strmult_back(	\
	char *to_mult,			\
	char *front,			\
	size_t n,				\
	t_bool free_front);

/*
**	Split string char *str on every char contained in string char *charset.
**	./strings/ft_split.c
*/
char	**ft_split(char *str, char *charset);

/*
**	Destroy and free splitted string result.
**	./strings/ft_destroy_splitted.c
**	Return:
**	NULL.
*/
void	*ft_destroy_splitted(char ***splitted);

/*
**	Get the size of splitted string array.
**	./strings/ft_get_splitted_size.c
*/
size_t	ft_get_splitted_size(char **splitted);

/*
**	Compare two strings.
**	./strings/ft_strcmp.c
*/
int		ft_strcmp(char *s1, char *s2);

/*
**	Compare two strings on n characters.
**	./strings/ft_strncmp.c
*/
int		ft_strncmp(char *s1, char *s2, size_t n);

/*
**	Return true if (char *)str end with (char *)end_with.
**	./strings/ft_str_endwith.c
*/
t_bool	ft_str_endwith(char *str, char *end_with);

/*
**	Return appended string (char *)str with char c.
**	./strings/ft_append_char_to_str.c
**	Return NULL if calloc failed.
*/
char	*ft_append_char_to_str(char *str, char c);

/*
**	Return string array length.
**	./strings/ft_get_string_array_length.c
*/
size_t	ft_get_string_array_length(char **string_array);

/*
**	Return (char **)str_array ended by (char *)str.
**	./strings/ft_add_str_to_str_array.c
**	Return NULL if calloc failed.
*/
char	**ft_add_str_to_str_array(char **str_array, char *str,
			t_bool free_array);

/*
**	Destroy and free string array.
**	./strings/ft_destroy_string_array.c
**	Return:
**	NULL.
*/
void	*ft_destroy_string_array(char ***string_array);

/*
**	Copy (char **)str_array to a new allocated string array.
**	./strings/copy_str_array.c
**	Return:
**	Copied str_array.
*/
char	**copy_str_array(char **str_array);

#endif

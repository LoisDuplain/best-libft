/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 14:52:16 by lduplain          #+#    #+#             */
/*   Updated: 2021/04/01 11:54:26 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char *str, char *charset)
{
	size_t	str_len;
	int		word_counter;
	size_t	i;

	str_len = ft_strlen(str);
	word_counter = 0;
	i = 0;
	while (i < str_len)
	{
		while (i < str_len && ft_contains_char(charset, str[i]))
			i++;
		if (i < str_len)
			word_counter++;
		else
			continue ;
		while (i < str_len && !ft_contains_char(charset, str[i]))
			i++;
	}
	return (word_counter);
}

void	fill_words(char *str, char *charset, char **result)
{
	size_t	str_len;
	int		word_counter;
	size_t	i;
	size_t	temp;

	str_len = ft_strlen(str);
	word_counter = 0;
	i = 0;
	while (i < str_len)
	{
		while (i < str_len && ft_contains_char(charset, str[i]))
			i++;
		if (i < str_len)
		{
			temp = i;
			word_counter++;
		}
		else
			continue ;
		while (i < str_len && !ft_contains_char(charset, str[i]))
			i++;
		result[word_counter - 1] = ft_strndup(&str[temp], i - temp, FALSE);
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		word_counter;

	if (str == NULL || charset == NULL)
		return (NULL);
	result = NULL;
	word_counter = count_words(str, charset);
	result = ft_calloc(word_counter + 1, sizeof(char *));
	if (result == NULL)
		return (NULL);
	fill_words(str, charset, result);
	result[word_counter] = NULL;
	return (result);
}

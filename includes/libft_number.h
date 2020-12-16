/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_number.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 12:20:58 by lduplain          #+#    #+#             */
/*   Updated: 2020/12/16 13:10:22 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_NUMBER_H
# define LIBFT_NUMBER_H

/*
**	START CUSTOM INCLUDES
*/

# include "libft.h"

/*
**	END CUSTOM INCLUDES
*/

/*
**	Get the unsigned long long number length in base ibase.
**	It means the number of digits in number.
**	./number/ft_ull_ibase_length.c
*/
size_t	ft_ull_ibase_length(unsigned long long number, int ibase);

/*
**	Get the unsigned long long number length in base 10.
**	It means the number of digits in number.
**	./number/ft_ull_length.c
*/
size_t	ft_ull_length(unsigned long long number);

/*
**	Get the long long number length.
**	It means the number of digits in number.
**	./number/ft_ll_length.c
*/
size_t	ft_ll_length(long long number);

#endif

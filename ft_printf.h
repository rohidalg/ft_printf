/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohidalg <rohidalg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 19:44:37 by rohidalg          #+#    #+#             */
/*   Updated: 2024/01/09 19:21:02 by rohidalg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft42/libft.h"
# include <libc.h>
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

extern int	ft_printf(char const *str, ...);
extern int	ft_putunsigned(unsigned int n, int fd);
extern int	ft_puthex_low(unsigned long long n, int fd);
extern int	ft_puthex_high(unsigned long long n, int fd);

#endif
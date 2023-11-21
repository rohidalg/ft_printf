/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohidalg <rohidalg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 19:44:37 by rohidalg          #+#    #+#             */
/*   Updated: 2023/11/13 19:44:40 by rohidalg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF
# define LIBFTPRINTF
# include <libc.h>
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
// # include "../libft/libft.h"

extern int	ft_printf(char const *str, ...);
extern int	ft_putchar(char c, int fd);
extern int	ft_putstr(char *s, int fd);

#endif

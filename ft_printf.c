/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohidalg <rohidalg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 19:42:18 by rohidalg          #+#    #+#             */
/*   Updated: 2023/11/13 19:42:21 by rohidalg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_options(char const *str, va_list *args)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 'c')
			return (ft_putchar(va_arg(*args, int), 1));
		else if (str[i] == 's')
			return (ft_putstr(va_arg(*args, char *), 1));
		else if (str[i] == 'p')
			return (ft_putstr("0x", 1) + ft_puthex_low(va_arg(*args, uintptr_t),
					1));
		else if (str[i] == 'd')
			return (ft_putnbr(va_arg(*args, int), 1));
		else if (str[i] == 'i')
			return (ft_putnbr(va_arg(*args, int), 1));
		else if (str[i] == 'u')
			return (ft_putunsigned(va_arg(*args, unsigned int), 1));
		else if (str[i] == 'x')
			return (ft_puthex_low(va_arg(*args, unsigned int), 1));
		else if (str[i] == 'X')
			return (ft_puthex_high(va_arg(*args, unsigned int), 1));
		else if (str[i] == '%')
			return (ft_putchar('%', 1));
		i++;
	}
	return (i);
}

int	ft_printf(char const *str, ...)
{
	va_list	args;
	int		i;
	int		i_print;

	va_start(args, str);
	i = 0;
	i_print = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i_print += ft_options(&str[i + 1], &args);
			i++;
		}
		else
			i_print += ft_putchar(str[i], 1);
		i++;
	}
	va_end(args);
	return (i_print);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_functions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohidalg <rohidalg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 19:33:02 by rohidalg          #+#    #+#             */
/*   Updated: 2024/01/09 19:21:27 by rohidalg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned(unsigned int n, int fd)
{
	int	len;

	len = 0;
	if (n > 9)
		len += ft_putunsigned(n / 10, fd);
	len += ft_putchar_fd(n % 10 + 48, fd);
	return (len);
}

int	ft_puthex_low(unsigned long long n, int fd)
{
	int	len;

	len = 0;
	if (n > 15)
	{
		len += ft_puthex_low(n / 16, fd);
		len += ft_puthex_low(n % 16, fd);
	}
	else
	{
		if (n > 9)
			len += ft_putchar_fd(n - 10 + 'a', fd);
		else
			len += ft_putchar_fd(n + 48, fd);
	}
	return (len);
}

int	ft_puthex_high(unsigned long long n, int fd)
{
	int	len;

	len = 0;
	if (n > 15)
	{
		len += ft_puthex_high(n / 16, fd);
		len += ft_puthex_high(n % 16, fd);
	}
	else
	{
		if (n > 9)
			len += ft_putchar_fd(n - 10 + 'A', fd);
		else
			len += ft_putchar_fd(n + 48, fd);
	}
	return (len);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_functions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohidalg <rohidalg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 19:33:02 by rohidalg          #+#    #+#             */
/*   Updated: 2023/11/21 19:33:46 by rohidalg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putchar(char c, int fd)
{
	return (write(fd, &c, 1));
}

int	ft_putstr(char *s, int fd)
{
	size_t	i;

	i = 0;
	if (!s && s == NULL)
	{
		ft_putstr("(null)", 1);
		return (6);
	}
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	return (i);
}

int	ft_nlen(int n)
{
	int	i;

	i = 0;
	if (n == 0)
	{
		n /= 10;
		i++;
	}
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

int	ft_putnbr(int n, int fd)
{
	int	len;

	len = ft_nlen(n);
	if (n == -2147483648)
	{
		ft_putchar('-', fd);
		ft_putchar('2', fd);
		ft_putnbr(147483648, fd);
		len++;
	}
	else if (n < 0)
	{
		ft_putchar('-', fd);
		n = -n;
		ft_putnbr(n, fd);
		len++;
	}
	else if (n > 9)
	{
		ft_putnbr(n / 10, fd);
		ft_putnbr(n % 10, fd);
	}
	else
		ft_putchar(n + 48, fd);
	return (len);
}

size_t	ft_strlen(char const *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int	ft_putunsigned(unsigned int n, int fd)
{
	int	len;

	len = 0;
	if (n > 9)
		len += ft_putunsigned(n / 10, fd);
	len += ft_putchar(n % 10 + 48, fd);
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
			len += ft_putchar(n - 10 + 'a', fd);
		else
			len += ft_putchar(n + 48, fd);
	}
	return (len);
}

int	ft_puthex_high(unsigned long long n, int fd)
{
	int len;

	len = 0;
	if (n > 15)
	{
		len += ft_puthex_high(n / 16, fd);
		len += ft_puthex_high(n % 16, fd);
	}
	else
	{
		if (n > 9)
			len += ft_putchar(n - 10 + 'A', fd);
		else
			len += ft_putchar(n + 48, fd);
	}
	return (len);
}

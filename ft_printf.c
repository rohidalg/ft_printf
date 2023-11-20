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

int	ft_c(char const *str, va_list *args)
{
	int		i;
	char	ch;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%' && str[i + 1] == 'c')
		{
			ch = va_arg(*args, int);
			write(1, &ch, 1);
			i += 2;
		}
		else
		{
			write(1, &str[i], 1);
			i++;
		}
	}
    return(i);
}

int	ft_printf(char const *str, ...)
{
	va_list	args;
	int		result;

	va_start(args, str);
	result = ft_c(str, &args);
	va_end(args);
	return (result);
}

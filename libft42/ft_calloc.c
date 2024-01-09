/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohidalg <rohidalg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 14:53:39 by rohidalg          #+#    #+#             */
/*   Updated: 2023/09/25 16:39:00 by rohidalg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	unsigned char	*tab;
	size_t			i;

	if (nitems == SIZE_MAX || size == SIZE_MAX)
		return (0);
	i = 0;
	tab = (unsigned char *)malloc(size * nitems);
	if (!tab)
		return (0);
	while (i < nitems * size)
		tab[i++] = '\0';
	return (tab);
}

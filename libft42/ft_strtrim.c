/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohidalg <rohidalg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 16:28:16 by rohidalg          #+#    #+#             */
/*   Updated: 2023/09/27 17:54:41 by rohidalg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;
	char	*dest;

	if (!s1 || !set)
		return (0);
	i = 0;
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
		i++;
	len = ft_strlen(&s1[i]);
	if (len > 0)
		while (s1[i + len - 1] && ft_strchr(set, s1[i + len - 1]))
			len--;
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (0);
	ft_strlcpy(dest, &s1[i], len + 1);
	return (dest);
}

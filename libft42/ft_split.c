/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rohidalg <rohidalg@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 18:40:41 by rohidalg          #+#    #+#             */
/*   Updated: 2023/09/28 15:03:06 by rohidalg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countwords(char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if ((str[i] != c) && (str[i + 1] == c || str[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

char	*ft_words(char const *str, char c, int *i)
{
	char	*word;
	int		start;
	int		len;

	while (str[*i] && str[*i] == c)
		(*i)++;
	start = *i;
	while (str[*i] && str[*i] != c)
		(*i)++;
	len = *i - start;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (0);
	ft_strlcpy(word, str + start, len + 1);
	return (word);
}

static char	**ft_free(char **string)
{
	int	i;

	i = 0;
	while (string[i])
	{
		free(string[i]);
		i++;
	}
	free(string);
	return (0);
}

char	**ft_split(char const *str, char c)
{
	int		countwords;
	char	**string;
	int		i_string;
	int		i;

	if (!str)
		return (0);
	countwords = ft_countwords(str, c);
	string = ft_calloc(countwords + 1, sizeof(char *));
	if (string == 0)
		return (0);
	i_string = 0;
	i = 0;
	while (i_string < countwords)
	{
		string[i_string] = ft_words(str, c, &i);
		if (!string[i_string])
			return (ft_free(string));
		i_string++;
	}
	string[i_string] = 0;
	return (string);
}

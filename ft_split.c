/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbueno-s <sbueno-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:43:19 by sbueno-s          #+#    #+#             */
/*   Updated: 2023/10/24 11:48:47 by sbueno-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_wordcount(char const *s, char c)
{
	int	word;
	int	i;

	i = 0;
	word = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			word++;
			while (s[i] != c && s[i])
				i++;
		}
		else if (s[i] == c)
			i++;
	}
	return (word);
}

int	ft_wordlen(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char	**ft_free(char **string, int i)
{
	while (i >= 0)
	{
		free(string[i]);
		i--;
	}
	free(string);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**strings;
	int		i;
	int		count;

	i = 0;
	count = 0;
	strings = (char **)ft_calloc((ft_wordcount(s, c) + 1), sizeof(char *));
	if (!strings || !s)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			strings[count] = ft_substr(s, i, ft_wordlen(&s[i], c));
			if (!strings[count])
				return (ft_free(strings, count));
			count++;
			i += ft_wordlen(&s[i], c);
		}
		else
			i++;
	}
	return (strings);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraad <eraad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 18:51:43 by eraad             #+#    #+#             */
/*   Updated: 2024/12/04 18:51:43 by eraad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(char const *s, char sep)
{
	int	words;

	words = 0;
	while (*s)
	{
		while (*s == sep)
			s++;
		if (*s)
		{
			words++;
			while (*s && *s != sep)
				s++;
		}
	}
	return (words);
}

static char	*ft_creatword(char const *s, int start, int len)
{
	char	*word;
	int		i;

	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = s[start + i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static char	**ft_createarray(int words)
{
	char	**array;

	array = malloc(sizeof(char *) * (words + 1));
	if (!array)
		return (NULL);
	return (array);
}

static int	ft_fillarray(char **array, char const *s, char sep, int words)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	while (s[j] && i < words)
	{
		while (s[j] == sep)
			j++;
		start = j;
		while (s[j] && s[j] != sep)
			j++;
		array[i] = ft_creatword(s, start, j - start);
		if (!array[i])
		{
			while (i > 0)
				free(array[--i]);
			return (0);
		}
		i++;
	}
	array[i] = NULL;
	return (1);
}

char	**ft_split(char const *s, char sep)
{
	char	**array;
	int		words;

	if (!s)
		return (NULL);
	words = ft_countwords(s, sep);
	array = ft_createarray(words);
	if (!array)
		return (NULL);
	if (!ft_fillarray(array, s, sep, words))
	{
		free(array);
		return (NULL);
	}
	return (array);
}

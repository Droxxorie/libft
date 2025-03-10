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

#include "../../include/libft.h"

static char	*create_word(char const *s, int len)
{
	char	*word;

	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	ft_strlcpy(word, s, len + 1);
	word[len] = '\0';
	return (word);
}

static char	**fill_array(char **array, char const *s, char sep, int words)
{
	int	i;
	int	j;

	i = 0;
	while (*s && i < words)
	{
		while (*s == sep)
			s++;
		j = 0;
		while (s[j] && s[j] != sep)
			j++;
		array[i] = create_word(s, j);
		if (!array[i])
		{
			while (--i >= 0)
				free(array[i]);
			free(array);
			return (NULL);
		}
		i++;
		s += j;
	}
	array[i] = NULL;
	return (array);
}

char	**ft_split(char const *s, char sep)
{
	char	**array;
	int		words;

	if (!s)
		return (NULL);
	words = count_words(s, sep);
	array = malloc(sizeof(char *) * (words + 1));
	if (!array)
		return (NULL);
	if (!fill_array(array, s, sep, words))
		return (NULL);
	return (array);
}

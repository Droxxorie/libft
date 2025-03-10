/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraad <eraad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 16:01:36 by eraad             #+#    #+#             */
/*   Updated: 2025/03/10 16:02:27 by eraad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

int	count_words(char const *s, char sep)
{
	int	words;

	words = 0;
	if (!s)
		return (0);
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

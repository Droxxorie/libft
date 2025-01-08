/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraad <eraad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:50:43 by eraad             #+#    #+#             */
/*   Updated: 2024/12/03 15:50:43 by eraad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*little)
		return ((char *)big);
	if (!*big)
		return (NULL);
	while (*big && len)
	{
		i = 0;
		j = len;
		while (little[i] && little[i] == big[i] && j--)
			i++;
		if (!little[i])
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraad <eraad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:48:20 by eraad             #+#    #+#             */
/*   Updated: 2024/12/03 15:48:20 by eraad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	srclen;
	size_t	dstlen;
	size_t	i;

	dstlen = 0;
	i = 0;
	srclen = ft_strlen(src);
	while (dst[dstlen] && dstlen < size)
		dstlen++;
	if (dstlen < size)
	{
		while (src[i] && i + dstlen < size - 1)
		{
			dst[dstlen + i] = src[i];
			i++;
		}
		if (dstlen + i < size)
			dst[i + dstlen] = '\0';
	}
	return (dstlen + srclen);
}

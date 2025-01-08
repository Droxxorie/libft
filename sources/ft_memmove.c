/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraad <eraad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:42:52 by eraad             #+#    #+#             */
/*   Updated: 2024/12/03 15:42:52 by eraad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *d, const void *s, size_t n)
{
	const unsigned char	*src;
	unsigned char		*dst;

	if (!d && !s)
		return (NULL);
	src = s;
	dst = d;
	if (dst > src && dst < src + n)
	{
		dst += n;
		src += n;
		while (n--)
			*--dst = *--src;
	}
	else
	{
		while (n--)
			*dst++ = *src++;
	}
	return (d);
}

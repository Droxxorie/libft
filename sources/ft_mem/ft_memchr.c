/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraad <eraad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:41:31 by eraad             #+#    #+#             */
/*   Updated: 2024/12/03 15:41:31 by eraad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	unsigned char		target;

	if (!s || n == 0)
		return (NULL);
	str = (const unsigned char *)s;
	target = (unsigned char)c;
	while (n--)
	{
		if (*str == target)
			return ((void *)str);
		str++;
	}
	return (NULL);
}

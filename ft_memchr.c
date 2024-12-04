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

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n);

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;

	str = s;
	while (n--)
	{
		if (*str == (unsigned char)c)
			return ((void *)str);
		str++;
	}
	return (0);
}
/*
int main(void)
{
	char *str = "Hello World";
	void *result = memchr(str, 'o', 0);
	printf("Original : %s\n", (unsigned char *)result);
	result = ft_memchr(str, 'o', 0);
	printf("ft : %s\n", (unsigned char *)result);
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraad <eraad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:51:11 by eraad             #+#    #+#             */
/*   Updated: 2024/12/03 15:51:11 by eraad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c);

char	*ft_strrchr(const char *s, int c)
{
	const char		*last;
	unsigned char	uc;

	last = NULL;
	uc = c;
	while (*s)
	{
		if ((unsigned char)*s == uc)
			last = s;
		s++;
	}
	if (uc == '\0')
		return ((char *)s);
	return ((char *)last);
}
/*
int main(void)
{
	char *str = "Hello World";
	printf("Original : %s\n", strrchr(str, 'y'));
	printf("ft : %s\n", ft_strrchr(str, 'y'));
}
*/
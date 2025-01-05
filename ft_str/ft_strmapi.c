/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraad <eraad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:49:25 by eraad             #+#    #+#             */
/*   Updated: 2024/12/03 15:49:25 by eraad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*result;

	if (!s || !f)
		return (0);
	i = 0;
	while (s[i])
		i++;
	result = malloc(sizeof(char) * (i + 1));
	if (!result)
		return (0);
	i = 0;
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
/*
char ft_toupperodd(unsigned int i, char c)
{
	if (!(i % 2) && (c >= 'a' && c <= 'z'))
		return (c - 32);
	return (c);
}

int main(void)
{
	char *str = "hello world";
	printf("original : %s\n", str);
	printf("ft : %s\n", ft_strmapi(str, ft_toupperodd));
}
*/
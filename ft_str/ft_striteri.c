/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraad <eraad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:47:31 by eraad             #+#    #+#             */
/*   Updated: 2024/12/03 15:47:31 by eraad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *));

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}
/*
void ft_toupperodd(unsigned int i, char *c)
{
	if (*c >= 'a' && *c <= 'z' && !(i % 2))
		*c = *c - 32;
}

int main(void)
{
	char str[] = "hello world";
	printf("original : %s\n", str);
	ft_striteri(str, ft_toupperodd);
	printf("ft : %s\n", str);
}
*/
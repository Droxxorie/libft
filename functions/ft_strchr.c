/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:53:08 by marvin            #+#    #+#             */
/*   Updated: 2024/11/18 13:53:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strchr(const char *s, int c);

char *ft_strchr(const char *s, int c)
{
    while (*s)
    {
        if (*s == c)
            return ((char *)s);
        s++;
    }
    if (c == '\0')
        return ((char *)s);
    return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char *str = "Hello World";
    printf("Original : %s\n", strchr(str, '\0'));
    printf("ft : %s\n", ft_strchr(str, '\0'));
}
*/
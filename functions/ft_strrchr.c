/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:09:12 by marvin            #+#    #+#             */
/*   Updated: 2024/11/18 14:09:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrchr(const char *s, int c);

char *ft_strrchr(const char *s, int c)
{
    while (*s)
        s++;
    if (c == '\0')
        return ((char *)s);
    s--;
    while (*s)
    {
        if (*s == c)
            return ((char *)s);
        s--;
    }
    return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char *str = "Hello World";
    printf("Original : %s\n", strrchr(str, 'y'));
    printf("ft : %s\n", ft_strrchr(str, 'y'));
}
*/
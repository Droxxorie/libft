/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:06:46 by marvin            #+#    #+#             */
/*   Updated: 2024/11/18 15:06:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memchr(const void *s, int c, size_t n);

void *ft_memchr(const void *s, int c, size_t n)
{
    const unsigned char *str;
    size_t i;

    str = s;
    i = 0;
    while (i < n && str[i])
    {
        if (str[i] == c)
            return ((void *)&str[i]);
        i++;
    }
    return (0);
}
/*
#include <string.h>

int main(void)
{
    char *str = "Hello World";
    void *result = memchr(str, 'o', 0);
    printf("Original : %s\n", (unsigned char *)result);
    result = ft_memchr(str, 'o', 0);
    printf("ft : %s\n", (unsigned char *)result);
}
*/
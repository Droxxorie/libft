/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:33:59 by marvin            #+#    #+#             */
/*   Updated: 2024/11/18 12:33:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n);

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    const unsigned char *str1;
    const unsigned char *str2;

    i = 0;
    str1 = s1;
    str2 = s2;
    while (i < n && (str1[i] || str2[i]))
    {
        if (str1[i] != str2[i])
            return (str1[i] - str2[i]);
        i++;
    }
    return (0);
}
/*
#include <string.h>

int main(void)
{
    char *str1 = "Hello World";
    char *str2 = "Hello Zorld";
    printf("Original : %i\n", memcmp(str1, str2, 11));
    printf("ft : %i\n", ft_memcmp(str1, str2, 11));
}
*/
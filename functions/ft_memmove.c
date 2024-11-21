/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 00:56:25 by marvin            #+#    #+#             */
/*   Updated: 2024/11/16 00:56:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memmove(void *d, const void *s, size_t n);

void *ft_memmove(void *d, const void *s, size_t n)
{
    size_t i;
    const unsigned char *src;
    unsigned char *dst;

    i = 0;
    src = s;
    dst = d;
    if (dst > src && dst < src + n)
    {
        while (n > 0)
        {
            n--;
            dst[n] = src[n];
        }
    }
    else
    {
        while (i < n)
        {
            dst[i] = src[i];
            i++;
        }
    }
    return (d);
}
/*
int main(void)
{
    char buff[20] = "Hello World";

    printf("Avant : %s\n", buff);
    ft_memmove(buff + 5, buff, 5);
    printf("Après : %s\n", buff);
}
*/
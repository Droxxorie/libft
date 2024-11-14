/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 15:06:01 by marvin            #+#    #+#             */
/*   Updated: 2024/11/14 15:06:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long unsigned int ft_strlcat(char *dst, const char *src, unsigned long int size);

long unsigned int ft_strlcat(char *dst, const char *src, unsigned long int size)
{
    long unsigned int i;
    int j;

    i = 0;
    j = 0;
    while (dst[j])
        j++;
    if (size != 0)
    {
        while (src[i] && i + j < size - 1)
        {
            dst[j + i] = src[i];
            i++;
        }
    }
    dst[i + j] = '\0';
    return (i + j);
}

#include <bsd/string.h>
#include <stdio.h>
int main(void)
{
    char dest1[50] = "Hello ";
    char dest2[50] = "Hello ";
    printf("original : %li\n", strlcat(dest1, "World", 0));
    printf("ft : %li\n", ft_strlcat(dest2, "World", 0));
    printf("original : %s\n", dest1);
    printf("ft : %s\n", dest2);
}
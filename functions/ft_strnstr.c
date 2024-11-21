/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:44:13 by marvin            #+#    #+#             */
/*   Updated: 2024/11/18 14:44:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strnstr(const char *big, const char *little, size_t len);

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    size_t j;

    while(*big && len)
    {
        i = 0;
        j = len;
        while (little[i] && little[i] == big[i] && j--)
            i++;
        if (!little[i])
            return ((char *)big);
        big++;
        len--;
    }
    return (0);
}
/*
#include <string.h>

int main(void)
{
    char *big = "Foo Bar Baz";
    char *little = "Ba";

    //printf("Orginial : %s\n", strnstr(big, little, 20));
    printf("ft : %s\n", ft_strnstr(big, little, 20));
}
*/
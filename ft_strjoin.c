/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 02:56:17 by marvin            #+#    #+#             */
/*   Updated: 2024/11/21 02:56:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char *ft_strjoin(char const *s1, char const *s2);
size_t ft_strlen(const char *str);

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t i;
    char *str;

    str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
    if (!str)
        return (0);
    i = 0;
    while (*s1)
    {
        str[i] = *s1;
        s1++;
        i++;
    }
    while (*s2)
    {
        str[i] = *s2;
        s2++;
        i++;
    }
    str[i] = '\0';
    return (str);
}
/*
int main(void)
{
    char *s1 = "Hello ";
    char *s2 = "World";
    char *str = ft_strjoin(s1, s2);
    printf("str : %s\n", str);
}
*/
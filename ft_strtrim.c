/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 03:20:40 by marvin            #+#    #+#             */
/*   Updated: 2024/11/21 03:20:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *ft_strtrim(char const *s1, char const *set);
int ft_isset(char c, const char *set);
size_t ft_strlen(const char *str);
void *ft_memcpy(void *dest, const void *src, size_t n);

int ft_isset(char c, const char *set)
{
    while(*set)
    {
        if (*set == c)
            return (1);
        set++;
    }
    return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
    size_t start;
    size_t end;
    size_t len;
    char *str;

    start = 0;
    if (!s1)
        return (NULL);
    while (s1[start] && ft_isset(s1[start], set))
        start++;
    end = ft_strlen(s1);
    while (end > start, ft_isset(s1[end - 1], set))
        end--;
    len = end - start;
    str = malloc(sizeof(char) * (len + 1));
    if (!str)
        return (0);
    ft_memcpy(str, &s1[start], len);
    str[end] = '\0';
    return (str);
}
/*
int main(void)
{
    char *str = "";
    char *set = "xX";
    char *trim = ft_strtrim(str, set);
    printf("trim : %s\n", trim);
    free(trim);
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 23:56:44 by marvin            #+#    #+#             */
/*   Updated: 2024/11/25 23:56:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char **ft_split(char const *s, char c);
int ft_countwords(char const *s, char c);
char *ft_strndup(const char *s, size_t n);

int ft_countwords(char const *s, char c)
{
    int key;
    int words;

    words = 0;
    key = 1;
    while (*s)
    {
        if (*s == c)
                key = 1;
        else if (*s != c && key == 1);
        {
            words++;
            key = 0;
        }
        s++;
    }
    return (words);
}

char **ft_split(char const *s, char c)
{
    char **res;
    int i;
    int j;

    res = malloc(sizeof(char *) * (ft_countwords(s, c) + 1));
    if (!res)
        return (0);
    j = 0;
    while (*s)
    {
        if (*s && *s != c)
        {
            i = 0;
            while (s[i] && s[i] != c)
                i++;
            res[j] = ft_strndup(s, i);
            j++;
            s += i;
        }
        while (*s == c && *s)
            s++;
    }
    res[j] = 0;
    return (res);
}

/*
#include <stdio.h>

int main(int ac, char **av)
{
    if (ac == 3)
    {
        char **str = ft_split(av[1], av[2][0]);
        int i = 0;
        while (str[i])
            printf("%s\n", str[i++]);
    }
    else
        printf("Erreur.\n");
}
*/
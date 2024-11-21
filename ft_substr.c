/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 02:42:02 by marvin            #+#    #+#             */
/*   Updated: 2024/11/21 02:42:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len);

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t i;
    char *substr;

    substr = malloc(sizeof(char) * len);
    if (!substr)
        return (0);
    i = 0;
    while (i < len)
    {
        substr[i] = s[start + i];
        i++;
    }
    return (substr);
}
/*
int main(void)
{
    const char *str = "Hello World";
    printf("tr : %s\n", str);
    char *substr = ft_substr(str, 6, 0);
    printf("substr : %s\n", substr);
}
*/
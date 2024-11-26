/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:24:30 by marvin            #+#    #+#             */
/*   Updated: 2024/11/20 16:24:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char *ft_strndup(const char *s, size_t n);

char *ft_strndup(const char *s, size_t n)
{
    size_t i;
    char *dup;

    i = 0;
    while (s[i] && i < n)
        i++;
    dup = malloc(sizeof(char) * (i + 1));
    if (!dup)
        return (0);
    i = 0;
    while (s[i] && i < n)
    {
        dup[i] = s[i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}

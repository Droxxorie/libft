/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 00:35:48 by marvin            #+#    #+#             */
/*   Updated: 2024/11/16 00:35:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *s, int c, size_t n);

void *ft_memset(void *s, int c, size_t n)
{
    unsigned char *str;
    size_t i;

    str = s;
    i = 0;
    while (i < n)
        str[i++] = c;
    return (s);
}
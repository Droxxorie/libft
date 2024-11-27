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

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size);

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t srclen;
    size_t dstlen;
    size_t i;

    srclen = 0;
    dstlen = 0;
    i = 0;
    while (src[srclen])
        srclen++;
    while (dst[dstlen])
        dstlen++;
    if (size < dstlen)
        return (dstlen + size - 1);
    while (src[i] && i + dstlen < size - 1)
    {
        dst[dstlen + i] = src[i];
        i++;
    }
    dst[i + dstlen] = '\0';
    return (dstlen + srclen);
}
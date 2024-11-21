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
    long unsigned int srclen;
    long unsigned int dstlen;
    long unsigned int i;

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
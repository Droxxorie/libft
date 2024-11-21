/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:41:09 by marvin            #+#    #+#             */
/*   Updated: 2024/11/14 14:41:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


long unsigned int ft_strlcpy(char *dst, const char *src, unsigned long int size);

long unsigned int ft_strlcpy(char *dst, const char *src, unsigned long int size)
{
    long unsigned int i;

    i = 0;
    while (src[i] && i < size - 1)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    while (src[i])
        i++;
    return (i);
}
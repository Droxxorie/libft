/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 19:57:35 by marvin            #+#    #+#             */
/*   Updated: 2024/11/14 19:57:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_bzero(void *s, long unsigned int n);

void ft_bzero(void *s, long unsigned int n)
{
    long unsigned int i;
    char *str;

    i = 0;
    str = s;
    while (i < n)
        str[i++] = '\0';
}
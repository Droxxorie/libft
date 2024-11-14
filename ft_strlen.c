/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:27:10 by marvin            #+#    #+#             */
/*   Updated: 2024/11/14 14:27:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned long int ft_strlen(const char *str);

unsigned long int ft_strlen(const char *str)
{
    unsigned long int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}
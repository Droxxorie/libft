/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:09:57 by marvin            #+#    #+#             */
/*   Updated: 2024/11/20 16:09:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(const char *nptr);

int ft_atoi(const char *nptr)
{
    int result;
    int sign;

    result = 0;
    sign = 1;
    while (*nptr >= 0 && *nptr <= 32)
        nptr++;
    if (*nptr == '+' || *nptr == '-')
    {
        if (*nptr == '-')
            sign = -1;
        nptr++;
    }
    while (*nptr >= '0' && *nptr <= '9')
    {
        result = result * 10 + (*nptr - '0');
        nptr++;
    }
    return (result * sign);
}


#include <stdlib.h>
#include <stdio.h>

int main(int ac, char **av)
{
    if (ac == 2)
    {
        printf("Original : %i\n", atoi(av[1]));
        printf("ft : %i\n", ft_atoi(av[1]));
    }
    else
        printf("Error.\n");
}
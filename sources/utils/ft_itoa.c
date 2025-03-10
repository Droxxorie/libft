/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraad <eraad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:29:55 by eraad             #+#    #+#             */
/*   Updated: 2024/12/03 15:29:55 by eraad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

static char	*handle_special_cases(int n)
{
	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	if (n == INT_MAX)
		return (ft_strdup("2147483647"));
	return (NULL);
}

char	*ft_itoa(int n)
{
	long	nbr;
	char	*res;
	int		len;

	if (n == INT_MIN || n == INT_MAX)
		return (handle_special_cases(n));
	len = ft_intlen(n);
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	res[len] = '\0';
	nbr = n;
	if (nbr < 0)
	{
		res[0] = '-';
		nbr = -nbr;
	}
	if (!nbr)
		res[0] = '0';
	while (nbr)
	{
		res[--len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (res);
}

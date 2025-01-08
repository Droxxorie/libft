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

#include "libft.h"

static int	ft_nbriter(int n)
{
	long	nbr;
	int		len;

	nbr = n;
	if (!nbr)
		return (1);
	len = 0;
	if (nbr < 0)
		len++;
	while (nbr)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	nbr;
	char	*res;
	int		len;

	len = ft_nbriter(n);
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (0);
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

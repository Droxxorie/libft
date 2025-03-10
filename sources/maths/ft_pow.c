/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraad <eraad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 17:43:35 by eraad             #+#    #+#             */
/*   Updated: 2025/03/10 17:46:22 by eraad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

double	ft_pow(double base, double exponant)
{
	double	result;

	if (exponant == 0)
		return (1);
	if (base == 0)
		return (0);
	if (exponant < 0)
	{
		base = 1 / base;
		exponant = -exponant;
	}
	result = 1;
	while (exponant > 0)
	{
		if ((int)exponant % 2 == 1)
			result *= base;
		base *= base;
		exponant /= 2;
	}
	return (result);
}

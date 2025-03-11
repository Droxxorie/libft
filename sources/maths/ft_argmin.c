/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argmin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraad <eraad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 11:53:36 by eraad             #+#    #+#             */
/*   Updated: 2025/03/11 11:53:36 by eraad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

int	ft_argmin(double *array, int size)
{
	int	min_index;
	int	i;

	if (size <= 0)
		return (-1);
	min_index = 0;
	i = 1;
	while (i < size)
	{
		if (array[i] < array[min_index])
			min_index = i;
		i++;
	}
	return (min_index);
}

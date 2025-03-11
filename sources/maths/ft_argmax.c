/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argmax.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraad <eraad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 11:49:47 by eraad             #+#    #+#             */
/*   Updated: 2025/03/11 11:49:47 by eraad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

int	ft_argmax(double *array, int size)
{
	int	max_index;
	int	i;

	if (size <= 0)
		return (-1);
	max_index = 0;
	i = 1;
	while (i < size)
	{
		if (array[i] > array[max_index])
			max_index = i;
		i++;
	}
	return (max_index);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_2d_str_array.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraad <eraad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 00:09:47 by eraad             #+#    #+#             */
/*   Updated: 2025/03/13 00:09:47 by eraad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free_2d_str_array(char ***array, int size)
{
	int	i;

	if (!array || !*array)
		return ;
	i = 0;
	if (size == -1)
		while ((*array)[i])
			ft_free_str_array(array[i++], -1);
	else
		while (i < size)
			ft_free_str_array(array[i++], -1);
	free(array);
}

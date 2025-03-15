/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_str_array.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraad <eraad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 00:07:58 by eraad             #+#    #+#             */
/*   Updated: 2025/03/13 00:07:58 by eraad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//* frees a 1D array of size n
//* if size is 0, it will free until it finds a NULL pointer
void	ft_free_str_array(char **array, int size)
{
	int	i;

	if (!array)
		return ;
	i = 0;
	if (size == -1)
		while (array[i])
			free(array[i++]);
	else
		while (i < size)
			free(array[i++]);
	free(array);
	array = NULL;
}

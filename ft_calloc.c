/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraad <eraad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:25:22 by eraad             #+#    #+#             */
/*   Updated: 2024/12/03 15:25:22 by eraad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size);

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*array;

	array = malloc(nmemb * size);
	if (!array)
		return (0);
	ft_memset(array, 0, nmemb * size);
	return (array);
}
/*
int main(void)
{
	int *array = ft_calloc(10, sizeof(int));
	if (!array)
		printf("Erreur alloc\n");
	int i = 0;
	while (i < 10)
		printf("%i ", array[i++]);
	printf("\n");
	free(array);
}
*/
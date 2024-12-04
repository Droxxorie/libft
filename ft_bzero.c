/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraad <eraad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:28:07 by eraad             #+#    #+#             */
/*   Updated: 2024/12/03 14:28:07 by eraad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, long unsigned int n);

void	ft_bzero(void *s, long unsigned int n)
{
	long unsigned int	i;
	char				*str;

	i = 0;
	str = s;
	while (i < n)
		str[i++] = '\0';
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunbr_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraad <eraad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 13:42:54 by eraad             #+#    #+#             */
/*   Updated: 2025/03/10 13:42:54 by eraad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

int	ft_printunbr_fd(unsigned int n, int fd)
{
	int	count;

	if (fd < 0)
		return (0);
	count = 0;
	if (n >= 10)
		count += ft_printunbr_fd(n / 10, fd);
	count += ft_printchar_fd((n % 10) + '0', fd);
	return (count);
}

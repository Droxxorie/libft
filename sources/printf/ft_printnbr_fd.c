/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraad <eraad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 13:35:26 by eraad             #+#    #+#             */
/*   Updated: 2025/03/10 13:35:26 by eraad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

int	ft_printnbr_fd(int n, int fd)
{
	long	nbr;
	int		count;

	if (fd < 0)
		return (-1);
	count = 0;
	nbr = (long)n;
	if (n < 0)
	{
		count += ft_printchar_fd('-', fd);
		nbr = -nbr;
	}
	if (nbr >= 10)
		count += ft_printnbr_fd(nbr / 10, fd);
	count += ft_printchar_fd((nbr % 10) + '0', fd);
	return (count);
}

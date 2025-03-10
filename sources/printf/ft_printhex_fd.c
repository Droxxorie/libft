/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraad <eraad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 13:54:29 by eraad             #+#    #+#             */
/*   Updated: 2025/03/10 13:54:41 by eraad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

int	ft_printhex_fd(unsigned int n, int fd, int uppercase)
{
	int		count;
	char	*base;

	if (fd < 0)
		return (0);
	if (uppercase)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	count = 0;
	if (n >= 16)
		count += ft_printhex_fd(n / 16, fd, uppercase);
	count += ft_printchar_fd(base[n % 16], fd);
	return (count);
}

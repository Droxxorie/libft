/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printaddr_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraad <eraad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 13:58:00 by eraad             #+#    #+#             */
/*   Updated: 2025/03/10 13:58:00 by eraad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

int	ft_printaddr_fd(void *adress, int fd)
{
	int	count;

	if (fd < 0)
		return (0);
	if (!adress)
		return (ft_printstr_fd("(nil)", fd));
	count = 0;
	count += ft_printstr_fd("0x", fd);
	count += ft_printhex_fd((unsigned long)adress, fd, 0);
	return (count);
}

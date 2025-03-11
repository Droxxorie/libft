/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printdbl.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraad <eraad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 22:43:33 by eraad             #+#    #+#             */
/*   Updated: 2025/03/10 22:43:33 by eraad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

int	ft_printdbl_fd(double number, int fd, int precision)
{
	char	*str;
	int		len;

	str = ft_dbltoa(number, precision);
	if (!str)
		return (-1);
	len = ft_printstr_fd(str, fd);
	free(str);
	return (len);
}

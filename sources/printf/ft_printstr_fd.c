/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraad <eraad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 13:45:38 by eraad             #+#    #+#             */
/*   Updated: 2025/03/10 13:45:38 by eraad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

int	ft_printstr_fd(char *s, int fd)
{
	int	i;
	int	count;

	if (fd < 0)
		return (0);
	if (!s)
		s = "(null)";
	i = 0;
	count = 0;
	while (s[i])
		count += ft_printchar_fd(s[i++], fd);
	return (count);
}

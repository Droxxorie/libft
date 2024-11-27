/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 16:59:41 by marvin            #+#    #+#             */
/*   Updated: 2024/11/25 16:59:41 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putchar_fd(char c, int fd);

void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}
/*
int main(void)
{
    ft_putchar_fd('a', 1);
}
*/
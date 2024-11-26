/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 17:02:39 by marvin            #+#    #+#             */
/*   Updated: 2024/11/25 17:02:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putstr_fd(char *s, int fd);
void ft_putchar_fd(char c, int fd);

void ft_putstr_fd(char *s, int fd)
{
    if (!s)
        return;
    while(*s)
    {
        ft_putchar_fd(*s, fd);
        s++;
    }
}
/*
int main(void)
{
    ft_putstr_fd("Hello World\n", 1);
}
*/
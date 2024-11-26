/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 17:07:14 by marvin            #+#    #+#             */
/*   Updated: 2024/11/25 17:07:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putendl_fd(char *s, int fd);
void ft_putstr_fd(char *s, int fd);
void ft_putchar_fd(char c, int fd);

void ft_putendl_fd(char *s, int fd)
{
    if (!s)
        return;
    ft_putstr_fd(s, fd);
    ft_putchar_fd('\n', fd);
}

/*
int main(void)
{
    ft_putendl_fd("Hello World", 1);
    ft_putendl_fd("Hello World", 1);
}
*/
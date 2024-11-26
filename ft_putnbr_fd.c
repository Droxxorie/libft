/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 17:17:51 by marvin            #+#    #+#             */
/*   Updated: 2024/11/25 17:17:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putnbr_fd(int n, int fd);
void ft_putchar_fd(char c, int fd);

void ft_putnbr_fd(int n, int fd)
{
    long nbr;

    nbr = n;
    if (nbr < 0)
        {
            ft_putchar_fd('-', fd);
            nbr = -nbr;
        }
    if (nbr / 10 != 0)
        ft_putnbr_fd(nbr / 10, fd);
    char c = (nbr % 10) + '0';
    ft_putchar_fd(c, fd);
}

/*
int main(void)
{
    ft_putnbr_fd(0, 1);
}
*/
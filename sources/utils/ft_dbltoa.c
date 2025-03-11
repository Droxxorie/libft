/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dbltoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraad <eraad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 17:28:12 by eraad             #+#    #+#             */
/*   Updated: 2025/03/11 10:57:31 by eraad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

static char	*pad_dec_part(char *dec_str, int dec_len, int precision)
{
	int		i;
	char	*padded_dec_str;

	padded_dec_str = malloc(sizeof(char) * precision + 1);
	if (!padded_dec_str)
		return (NULL);
	ft_strlcpy(padded_dec_str, dec_str, dec_len + 1);
	i = dec_len;
	while (i < precision)
		padded_dec_str[i++] = '0';
	padded_dec_str[i] = '\0';
	return (padded_dec_str);
}

static void	init_dbltoa(t_dbltoa *d, double num, int p)
{
	char	*temp;

	d->sign = 1;
	if (num < 0)
	{
		d->sign = -1;
		num *= -1;
	}
	d->int_part = (int)num;
	d->dec_part = (int)(ft_fabs(num - d->int_part) * ft_pow(10, p) + 0.5);
	d->int_str = ft_itoa(ft_fabs(d->int_part));
	d->dec_str = ft_itoa(d->dec_part);
	if ((int)ft_strlen(d->dec_str) < p)
	{
		temp = pad_dec_part(d->dec_str, ft_strlen(d->dec_str), p);
		free(d->dec_str);
		d->dec_str = temp;
	}
	d->result = NULL;
}

char	*ft_dbltoa(double number, int precision)
{
	t_dbltoa	d;
	char		*temp;

	init_dbltoa(&d, number, precision);
	if (precision > 0)
	{
		temp = ft_strjoin(d.int_str, ".");
		d.result = ft_strjoin(temp, d.dec_str);
		free(temp);
	}
	else
		d.result = ft_strdup(d.int_str);
	if (d.sign == -1)
	{
		temp = ft_strjoin("-", d.result);
		free(d.result);
		d.result = temp;
	}
	free(d.int_str);
	free(d.dec_str);
	return (d.result);
}

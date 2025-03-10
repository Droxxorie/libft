/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dbltoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraad <eraad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 17:28:12 by eraad             #+#    #+#             */
/*   Updated: 2025/03/10 18:32:00 by eraad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

static void free_dbltoa(t_dbltoa *dbltoa)
{
	if (dbltoa->int_str)
		free(dbltoa->int_str);
	if (dbltoa->dec_str)
		free(dbltoa->dec_str);
	if (dbltoa->result)
		free(dbltoa->result);
}

static char *pad_dec_part(char *dec_str, int dec_len, int precision)
{
	int		i;
	char	*padded_dec_str;

	padded_dec_str = malloc(sizeof(char) * precision + 1);
	if (!padded_dec_str)
		return (NULL);
	ft_strlcat(padded_dec_str, dec_str, precision + 1);
	i = dec_len;
	while (i < precision)
		padded_dec_str[i++] = '0';
	padded_dec_str[i] = '\0';
	return (padded_dec_str);
}

static void init_dbltoa(t_dbltoa *dbltoa, double number, int precision)
{
	dbltoa->number = number;
	if (number < 0)
	{
		dbltoa->sign = -1;
		dbltoa->number *= -1;
	}
	else
		dbltoa->sign = 1;
	dbltoa->int_part = (int)dbltoa->number;
	dbltoa->dec_part = (int)(ft_fabs(dbltoa->number - dbltoa->int_part) * ft_pow(10, precision));
	dbltoa->int_str = ft_itoa(ft_fabs(dbltoa->int_part));
	dbltoa->dec_str = ft_itoa(dbltoa->dec_part);
	if (!dbltoa->int_str || !dbltoa->dec_str)
	{
		free_dbltoa(dbltoa);
		return ;
	}
	dbltoa->int_len = ft_intlen(dbltoa->int_part);
	dbltoa->dec_len = ft_intlen(dbltoa->dec_part);
	if (dbltoa->dec_len < precision)
	{
		free(dbltoa->dec_str);
		dbltoa->dec_str = pad_dec_part(dbltoa->dec_str, dbltoa->dec_len, precision);
	}
	dbltoa->result = malloc(sizeof(char) * (dbltoa->int_len + dbltoa->dec_len + 1));
}

char *dbltoa(double number, int precision)
{
	t_dbltoa dbltoa;

	init_dbltoa(&dbltoa, number, precision);
	if (!dbltoa.int_str || !dbltoa.dec_str || !dbltoa.result)
	{
		free_dbltoa(&dbltoa);
		return (NULL);
	}
	if (precision > 0)
	
	
}

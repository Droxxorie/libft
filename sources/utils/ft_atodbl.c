/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atodbl.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraad <eraad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 16:53:59 by eraad             #+#    #+#             */
/*   Updated: 2025/03/10 17:26:42 by eraad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

static void	init_atodbl(t_atodbl *atodbl)
{
	atodbl->sign = 1;
	atodbl->int_part = 0;
	atodbl->dec_part = 0.0;
	atodbl->frac = 1.0;
	atodbl->exp = 0;
	atodbl->exp_sign = 1;
	atodbl->result = 0.0;
}

static void	handle_exponent(char *s, t_atodbl *atodbl)
{
	int		i;
	double	power;

	if (*s == '-' || *s == '+')
		if (*s++ == '-')
			atodbl->exp_sign = -1;
	while (ft_isdigit(*s))
		atodbl->exp = (atodbl->exp * 10) + (*s++ - '0');
	if (atodbl->exp != 0)
	{
		i = 0;
		power = 1.0;
		while (i++ < atodbl->exp)
			power *= 10.0;
		if (atodbl->exp_sign == -1)
			atodbl->result /= power;
		else
			atodbl->result *= power;
	}
}

double	ft_atodbl(char *s)
{
	t_atodbl		atodbl;

	init_atodbl(&atodbl);
	while (ft_iswhitespace(*s))
		s++;
	if (*s == '-' || *s == '+')
		if (*s++ == '-')
			atodbl.sign = -1;
	while (ft_isdigit(*s))
		atodbl.int_part = (atodbl.int_part * 10) + (*s++ - '0');
	if (*s == '.')
	{
		s++;
		while (ft_isdigit(*s))
		{
			atodbl.frac /= 10;
			atodbl.dec_part = atodbl.dec_part + (*s++ - '0') * atodbl.frac;
		}
	}
	atodbl.result = (atodbl.int_part + atodbl.dec_part) * atodbl.sign;
	if (*s == 'e' || *s == 'E')
		handle_exponent(s + 1, &atodbl);
	return (atodbl.result);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraad <eraad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:51:33 by eraad             #+#    #+#             */
/*   Updated: 2024/12/03 15:51:33 by eraad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set);
int		ft_isset(char c, const char *set);

int	ft_isset(char c, const char *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	const char	*start;
	const char	*end;
	size_t		len;
	char		*str;
	char		*buffer;

	if (!s1)
		return (NULL);
	start = s1;
	end = s1 + ft_strlen(s1) - 1;
	while (*start && ft_isset(*start, set))
		start++;
	while (end >= start && ft_isset(*end, set))
		end--;
	len = end - start + 1;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	buffer = str;
	while (len--)
		*buffer++ = *start++;
	*buffer = '\0';
	return (str);
}
/*
int main(void)
{
	char *str = "";
	char *set = "xX";
	char *trim = ft_strtrim(str, set);
	printf("trim : %s\n", trim);
	free(trim);
}
*/
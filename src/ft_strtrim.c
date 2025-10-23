/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 16:53:48 by kkweon            #+#    #+#             */
/*   Updated: 2025/10/23 12:43:20 by koodal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	set_check(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

unsigned int	ft_strlcpy(char *dst, char *src, unsigned int size)
{
	int				i;
	unsigned int	srclen;

	i = 0;
	srclen = ft_strlen(src);
	while (i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (srclen);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int i;
	int j;
	int len;
	const char *start;
	const char *end;
	char *tmp;

	len = ft_strlen(s1) - 1;
	i = 0;
	while (set_check(set, s1[i]) > 0)
		i++;
	start = &s1[i];
	while (set_check(set, s1[len]) > 0)
		len--;
	end = &s1[len];
	j = 0;
	while (end >= start)
	{
		j++;
		end--;
	}
	tmp = (char *)malloc((j + 1) * sizeof(char));
	if (tmp == NULL)
		return (NULL);
	ft_strlcpy(tmp, (char *)start, j + 1);
	return (tmp);
}
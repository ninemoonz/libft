/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.codam.nl>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 12:56:08 by kkweon            #+#    #+#             */
/*   Updated: 2025/10/27 14:43:50 by kkweon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <libft.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strnstr(const char *big, const char *small, size_t len)
{
	size_t	i;
	size_t	j;
	char	*tmp_big;
	char	*tmp_small;

	tmp_big = (char *)big;
	tmp_small = (char *)small;
	if (*tmp_small == '\0')
		return (tmp_big);
	i = 0;
	while (tmp_big[i] && i < len)
	{
		j = 0;
		while ((tmp_big[i + j] == tmp_small[j]) && i + j < len)
		{
			if (tmp_big[i + j] != '\0')
			{
				if (tmp_small[j + 1] == '\0')
					return (&tmp_big[i]);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}

int	main(void)
{
	char	*haystack;
	char	*needle;

	haystack = "This is a haystack. try find needle in here";
	needle = "needle";
	printf("%s\n", ft_strnstr(haystack, needle, 5));
	return (0);
}

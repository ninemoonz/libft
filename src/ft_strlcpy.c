/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 17:11:40 by kkweon            #+#    #+#             */
/*   Updated: 2025/10/24 16:25:45 by koodal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <libft.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	srclen;

	srclen = ft_strlen(src);
	i = 0;
	if (dstsize == 0)
		return (srclen);
	while ((i < (dstsize - 1)) && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (srclen);
}

void strlcpy_check (char *dst, const char *src, size_t dstsize)
{
	int strlcpy_res;
	int ft_strlcpy_res;
	char *dst1;
	char *dst2;

	dst1 = dst;
	dst2 = dst;

	strlcpy_res = strlcpy(dst1, src, dstsize);
	ft_strlcpy_res = ft_strlcpy(dst2, src, dstsize);
	printf("strlcpy return value: %d\n", strlcpy_res);
	printf("ft_strlcpy return value: %d\n", ft_strlcpy_res);
	printf("strlcpy dst result: %s\n", dst1);
	printf("ft_strlcpy dst result: %s\n", dst2);
}

int main(void)
{
	char dst[10];
	char *src = "source";
	int strlen;

	strlcpy_check(dst, src, 5);
	return (0);
}
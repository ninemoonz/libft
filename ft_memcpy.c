/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.codam.nl>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 14:31:07 by kkweon            #+#    #+#             */
/*   Updated: 2025/10/09 15:03:09 by kkweon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, void *src, unsigned int n)
{
	char	*char_dst;
	char	*char_src;

	char_dst = dest;
	char_src = src;
	if (dest == NULL && src == NULL)
	{
		return (dest);
	}
	while (n > 0)
	{
		*char_dst = *char_src;
		char_dst++;
		char_src++;
		n--;
	}
	return (dest);
}

void	memcpy_check(char *dest1, char *dest2, char *src, unsigned int n)
{
	printf("\n");
	printf("[ORIGINAL]\n");
	printf("Before memcpy: %s\n", dest1);
	memcpy(dest1, src, n);
	printf("After memcpy: %s\n", dest1);
	printf("\n");
	printf("[FT_MEMCPY]\n");
	printf("Before memcpy: %s\n", dest2);
	memcpy(dest2, src, n);
	printf("After memcpy: %s\n", dest2);
}

int	main(void)
{
	char dest1[50] = "This is destination string";
	char dest2[50] = "This is destination string";
	char src[50] = "This src string. And it's longer than dest string";
	memcpy_check(dest1, dest2, src, 50);
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.codam.nl>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 17:48:01 by kkweon            #+#    #+#             */
/*   Updated: 2025/10/08 18:32:44 by kkweon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memset(void *dest, int c, size_t count)
{
	unsigned int	i;
	unsigned char	*p;

	p = dest;
	i = 0;
	while (count > 0)
	{
		*p = c;
		p++;
		count--;
	}
	return (dest);
}

// what is void pointer

int	main(void)
{
	char buffer[] = "This is very important string";
	printf("size of int is: %lu\n", sizeof(int));
	printf("Before: %s\n", buffer);
	ft_memset(buffer + 2, '8', 10 * sizeof(char));
	printf("After: %s\n", buffer);
	return (0);
}
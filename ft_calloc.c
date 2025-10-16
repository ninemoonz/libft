/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.codam.nl>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 11:27:29 by kkweon            #+#    #+#             */
/*   Updated: 2025/10/16 12:18:08 by kkweon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_calloc(size_t nitems, size_t size)
{
	size_t			i;
	unsigned char	*tmp;

	i = 0;
	tmp = malloc(nitems * size); // total bytes to allocate
	if (tmp == NULL)
		return (NULL);
	while (i < nitems)
	{
		tmp[i] = 0;
		i++;
	}
	return (tmp);
}

void	calloc_cmp(size_t nitems, size_t size)
{
	int	*array1;
	int	*array2;

	size_t i, j;
	i = 0;
	array1 = calloc(nitems, size);
	array2 = ft_calloc(nitems, size);
	printf("calloc result: ");
	while (i < nitems)
	{
		printf("%d", array1[i]);
		i++;
	}
	j = 0;
	printf("\n");
	printf("ft_calloc result: ");
	while (j < nitems)
	{
		printf("%d", array2[j]);
		j++;
	}
	free(array1);
	free(array2);
}

int	main(void)
{
	calloc_cmp(10, sizeof(int));
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.codam.nl>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:16:17 by kkweon            #+#    #+#             */
/*   Updated: 2025/10/22 13:34:53 by kkweon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int	len_count(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*itoa_malloc(int count)
{
	char	*res;

	res = (char *)malloc((count + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	return (res);
}

char	*ft_itoa(int n)
{
	char	*tmp;
	char	*dest;
	int		count;

	count = len_count(n);
	printf("%d", count);
	dest = itoa_malloc(count);
	while (n != 0)
	{
		tmp[count] = ((n % 10) + '0');
		count--;
	}
	return (tmp);
}

int	main(void)
{
	int a = 123;
	char *res;

	res = ft_itoa(a);
	printf("%s\n", res);
	return (0);
}
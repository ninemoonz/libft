/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.codam.nl>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 11:35:11 by kkweon            #+#    #+#             */
/*   Updated: 2025/10/13 12:55:23 by kkweon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	char	*str1_tmp;
	char	*str2_tmp;
	int		i;

	str1_tmp = (char *)str1;
	str2_tmp = (char *)str2;
	i = 0;
	if (str1_tmp != NULL && str2_tmp != NULL)
	{
		while (i < n)
		{
			if (str1_tmp[i] == str2_tmp[i])
				i++;
			else
				return (str1_tmp[i] - str2_tmp[i]);
		}
	}
	return (0);
}

int	main(void)
{
	char *str1 = "";
	char *str2 = "asdfasdfasdfddd";
	int res;
	int res2;

	res = ft_memcmp(str1, str2, strlen(str1));
	res2 = memcmp(str1, str2, strlen(str1));
	printf("ft_memcmp res: %d\n", res);
	printf("memcmp res: %d\n", res2);

	return (0);
}
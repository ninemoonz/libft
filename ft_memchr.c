/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.codam.nl>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 11:14:17 by kkweon            #+#    #+#             */
/*   Updated: 2025/10/13 11:32:28 by kkweon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	char	*tmp_str;
	size_t	i;

	tmp_str = (char *)str;
	i = 0;
	if (n == 0)
		return (NULL);
	while (i <= n && tmp_str[i] != c)
	{
		i++;
	}
	return (&tmp_str[i]);
}

int	main(void)
{
	char *str1 = "this is string 1";
	char *res;

	printf("before: %s\n", str1);
	res = ft_memchr(str1 + 3, 't', 10);
	printf("after: %s\n", res);
	return (0);
}
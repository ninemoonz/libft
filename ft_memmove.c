/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.codam.nl>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 15:05:17 by kkweon            #+#    #+#             */
/*   Updated: 2025/10/09 17:23:05 by kkweon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, void *src, unsigned int n)
{
	char			*tmp_dst;
	char			*tmp_src;
	unsigned int	i;

	tmp_dst = dst;
	tmp_src = src;
	i = 0;
	if (dst == NULL && src == NULL)
	{
		return (NULL);
	}
	if (tmp_dst == tmp_src)
	{
		while (n > 0)
		{
			*tmp_dst = *tmp_src;
			tmp_dst++;
			tmp_src++;
			n--;
		}
	}
	// else if (tmp_dst != tmp_src)
	// {
	// 	while (i < n)
	// 	{
	// 		i++;
	// 	}
	// }
	return (dst);
}

int	main(void)
{
	char str_d[] = "This is destination";
	char str_s[] = "This is source";

	// printf("str_d before: %s\n", str_d);
	// memmove(str_d + 5, str_d, sizeof(str_s));
	// printf("size of str_s: %lu\n", sizeof(str_s));
	// printf("str_d after: %s\n", str_d);
	// printf("str_s after: %s\n", str_s);

	ft_memmove(str_d, str_s, sizeof(str_s));
	printf("str_d after: %s\n", str_d);
	return (0);
}
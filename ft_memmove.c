/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.codam.nl>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 15:05:17 by kkweon            #+#    #+#             */
/*   Updated: 2025/10/10 13:30:26 by kkweon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, void *src, unsigned int n)
{
	char			*tmp_dst;
	char			*tmp_src;
	unsigned int	i;
	unsigned int	d_len;

	if (dst == NULL && src == NULL)
		return (NULL);
	tmp_dst = dst;
	tmp_src = src;
	i = 0;
	if (tmp_dst > tmp_src)
	{
		while (n-- > 0)
		{
			tmp_dst[n] = tmp_src[n];
		}
	}
	else
	{
		while (i < n)
		{
			tmp_dst[i] = tmp_src[i];
			i++;
		}
	}
	return (dst);
}

int	main(void)
{
	char str_d[] = "This is destination";
	char str_d2[] = "This is destination";
	char str_s[] = "This is source";

	printf("ft_ memmove str_d before: %s\n", str_d);
	ft_memmove(str_d + 5, str_d, 5);
	printf("ft_ memmove str_d after: %s\n", str_d);
	printf("\n");
	printf("memmove str_d2 before: %s\n", str_d2);
	memmove(str_d2 + 5, str_d2, 5);
	printf("memmove str_d2 after: %s\n", str_d2);
	return (0);
}
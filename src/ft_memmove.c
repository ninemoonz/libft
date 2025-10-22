/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.codam.nl>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 15:05:17 by kkweon            #+#    #+#             */
/*   Updated: 2025/10/22 16:10:47 by kkweon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memmove(void *dst, void *src, size_t n)
{
	char *tmp_dst;
	char *tmp_src;
	unsigned int i;

	if (dst == NULL && src == NULL)
		return (NULL);
	tmp_dst = (char *)dst;
	tmp_src = (char *)src;
	i = 0;
	if (tmp_dst > tmp_src)
	{
		while (n > 0)
		{
			n--;
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
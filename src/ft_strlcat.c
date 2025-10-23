/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 14:38:03 by kkweon            #+#    #+#             */
/*   Updated: 2025/10/23 12:48:52 by koodal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t dst_len;
	size_t src_len;
	size_t tot_len;
	size_t buffer_len;
	size_t i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	tot_len = dst_len + src_len;
	buffer_len = dstsize - dst_len - 1;
	if (dst_len >= dstsize)
		return (tot_len);
	i = 0;
	while (src[i] != '\0' && buffer_len--)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (tot_len);
}
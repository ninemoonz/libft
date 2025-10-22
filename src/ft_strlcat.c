/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.codam.nl>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 14:38:03 by kkweon            #+#    #+#             */
/*   Updated: 2025/10/08 17:47:14 by kkweon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dst, char *src, unsigned int dstsize)
{
	unsigned int dst_len;
	unsigned int src_len;
	unsigned int tot_len;
	unsigned int buffer_len;
	unsigned int i;

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
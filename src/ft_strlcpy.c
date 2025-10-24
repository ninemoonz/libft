/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.codam.nl>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 17:11:40 by kkweon            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2025/10/23 12:49:38 by koodal           ###   ########.fr       */
=======
/*   Updated: 2025/10/23 14:52:20 by kkweon           ###   ########.fr       */
>>>>>>> b0f3618804ce3e21ada0cbc7f993041dd41beced
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

<<<<<<< HEAD
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int				i;
=======
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
>>>>>>> b0f3618804ce3e21ada0cbc7f993041dd41beced
	size_t	srclen;

	i = 0;
	srclen = ft_strlen(src);
	while (i < (dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (srclen);
}

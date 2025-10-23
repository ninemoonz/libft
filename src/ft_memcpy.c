/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.codam.nl>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 14:31:07 by kkweon            #+#    #+#             */
/*   Updated: 2025/10/23 15:06:28 by kkweon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, void *src, unsigned int n)
{
	char	*char_dst;
	char	*char_src;

	char_dst = dest;
	char_src = src;
	if (!dest && !src)
	{
		return (dest);
	}
	while (n > 0)
	{
		*char_dst = *char_src;
		char_dst++;
		char_src++;
		n--;
	}
	return (dest);
}

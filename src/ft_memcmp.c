/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.codam.nl>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 11:35:11 by kkweon            #+#    #+#             */
/*   Updated: 2025/10/22 16:07:00 by kkweon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	char	*str1_tmp;
	char	*str2_tmp;
	size_t	i;

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

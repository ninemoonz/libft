/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:22:48 by kkweon            #+#    #+#             */
/*   Updated: 2025/10/29 20:56:07 by koodal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest_mem;
	size_t	i;

	dest_mem = (char *)malloc((len + 1) * sizeof(char));
	if (!dest_mem)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dest_mem[i] = s[start];
		i++;
		start++;
	}
	dest_mem[i] = '\0';
	return (dest_mem);
}

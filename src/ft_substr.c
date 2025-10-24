/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:22:48 by kkweon            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2025/10/23 12:43:38 by koodal           ###   ########.fr       */
=======
/*   Updated: 2025/10/23 15:18:31 by kkweon           ###   ########.fr       */
>>>>>>> b0f3618804ce3e21ada0cbc7f993041dd41beced
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		tot_len;
	char	*dest_mem;
	int		i;

	tot_len = ft_strlen(s);
	dest_mem = (char *)malloc((len + 1) * sizeof(char));
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

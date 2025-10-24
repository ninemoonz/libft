/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 17:12:29 by kkweon            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2025/10/23 12:43:05 by koodal           ###   ########.fr       */
=======
/*   Updated: 2025/10/23 15:23:21 by kkweon           ###   ########.fr       */
>>>>>>> b0f3618804ce3e21ada0cbc7f993041dd41beced
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strrchr(const char *str, int init)
{
	int		i;
	int		len;
	char	*tmp_str;

	i = 0;
	tmp_str = (char *)str;
	len = ft_strlen(tmp_str);
	while (len > 0)
	{
		if (str[len] == init)
			return (&tmp_str[len]);
		len--;
	}
	return (NULL);
}

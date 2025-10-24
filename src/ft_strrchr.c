/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 17:12:29 by kkweon            #+#    #+#             */
/*   Updated: 2025/10/24 19:19:38 by koodal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strrchr(const char *str, int init)
{
	int		len;
	char	*tmp_str;

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

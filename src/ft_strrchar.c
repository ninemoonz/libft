/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 17:12:29 by kkweon            #+#    #+#             */
/*   Updated: 2025/10/23 12:43:05 by koodal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strrchr(const char *str, int init)
{
	int		i;
	int		len;
	char	*tmp_str;

	i = 0;
	// const variables can't be motified or returned.
	// therefore need to assign and type cast the constant pointer to char pointer.
	// as below:
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

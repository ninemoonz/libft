/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.codam.nl>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 13:53:47 by kkweon            #+#    #+#             */
/*   Updated: 2025/10/22 16:12:36 by kkweon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strchr(const char *str, int init)
{
	int i;
	char *tmp_str;

	i = 0;
	// const variables can't be motified or returned.
	// therefore need to assign and type cast the constant pointer to char pointer.
	// as below:
	tmp_str = (char *)str;
	while (str[i] != '\0')
	{
		if (str[i] == init)
			return (&tmp_str[i]);
		i++;
	}
	return (NULL);
}
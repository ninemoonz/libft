/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 17:48:01 by kkweon            #+#    #+#             */
/*   Updated: 2025/10/24 19:14:29 by koodal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memset(void *dest, int c, size_t count)
{
	char	*char_p;

	char_p = dest;
	while (count > 0)
	{
		*char_p = c;
		char_p++;
		count--;
	}
	return (dest);
}

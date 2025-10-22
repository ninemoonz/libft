/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.codam.nl>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 11:14:17 by kkweon            #+#    #+#             */
/*   Updated: 2025/10/22 16:06:14 by kkweon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

// difference of this ft_memchr and ft_strchar is the third argument.
// strchr goes till the null terminator of t a string for search.
// memchar searches only until the size_t byte.

void	*ft_memchr(const void *str, int c, size_t n)
{
	char *tmp_str;
	size_t i;

	tmp_str = (char *)str;
	i = 0;
	if (n == 0)
		return (NULL);
	while (i <= n && tmp_str[i] != c)
	{
		i++;
	}
	return (&tmp_str[i]);
}
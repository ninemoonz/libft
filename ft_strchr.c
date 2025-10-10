/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.codam.nl>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 13:53:47 by kkweon            #+#    #+#             */
/*   Updated: 2025/10/10 17:02:48 by kkweon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *str, int init)
{
	int		i;
	char	*tmp_str;

	i = 0;
	tmp_str = (char *)str;
	while (str[i] != '\0')
	{
		if (str[i] == init)
			return (&tmp_str[i]);
		i++;
	}
	return (tmp_str);
}

int	main(void)
{
	char str[] = "find something in this string please";
	char *ptr;

	ptr = ft_strchr(str, 'g');
	printf("%s", ptr);

	return (0);
}
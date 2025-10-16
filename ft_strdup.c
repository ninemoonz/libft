/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.codam.nl>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 12:57:19 by kkweon            #+#    #+#             */
/*   Updated: 2025/10/16 15:18:43 by kkweon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(const char *s)
{
	int		i;
	size_t	len;
	char	*dup;

	len = ft_strlen(s);
	dup = (char *)malloc((len) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

int	main(void)
{
	char *src = "this is a source string";
	char *dest;
	char *dest2;

	dest = ft_strdup(src);
	dest2 = strdup(src);
	printf("ft_strdup result: %s\n", dest);
	printf("strdup result: %s\n", dest2);
	return (0);
}
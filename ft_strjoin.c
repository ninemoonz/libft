/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.codam.nl>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 16:16:08 by kkweon            #+#    #+#             */
/*   Updated: 2025/10/16 16:27:55 by kkweon           ###   ########.fr       */
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

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		s1_len;
	int		s2_len;
	char	*dest;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	dest = (char *)malloc((s1_len + s2_len + 1) * sizeof(char));
	i = 0;
	j = 0;
	while (i < (s1_len + s2_len))
	{
		while (s1[i])
		{
			dest[i] = s1[i];
			i++;
		}
		while (s2[j])
		{
			dest[i] = s2[j];
			i++;
			j++;
		}
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char *str1 = "this is ";
	char *str2 = "string join";
	char *des;

	des = ft_strjoin(str1, str2);
	printf("%s\n", ft_strjoin(str1, str2));
	return (0);
}
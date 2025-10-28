/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.codam.nl>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 15:16:11 by kkweon            #+#    #+#             */
/*   Updated: 2025/10/28 17:37:10 by kkweon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t	word_count(char const *s, char c)
{
	int		flag;
	size_t	count;

	flag = 0;
	count = 0;
	while (*s)
	{
		if (*s != c && flag == 0)
		{
			flag = 1;
			count++;
		}
		else if (*s == c)
			flag = 0;
		s++;
	}
	return (count);
}

char	*word_generator(char const *s, char c)
{
	int		i;
	char	*dest;

	if (!s)
		return (NULL);
	i = 0;
	while (*s == c)
		s++;
	while (s[i] && s[i] != c)
		i++;
	dest = (char *)malloc((i + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	split_free(char **arr_malloc, int i)
{
	while (arr_malloc[i])
	{
		free(arr_malloc[i]);
		i++;
	}
	free(arr_malloc);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**arr_malloc;

	if (!s)
		return (NULL);
	arr_malloc = (char **)malloc((word_count(s, c) + 1) * sizeof(char *));
	if (!arr_malloc)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
	}
	return (arr_malloc);
}

int	main(void)
{
	int i;
	char *src = " hello world Hello codam";
	char dl = ' ';
	char **res = ft_split(src, dl);
	i = 0;
	while (res[i])
	{
		printf("%s\n", res[i]);
		i++;
	}
	return (0);
}
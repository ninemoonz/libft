/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.codam.nl>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 15:44:50 by kkweon            #+#    #+#             */
/*   Updated: 2025/10/20 16:15:19 by kkweon           ###   ########.fr       */
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

int	word_count(char const *str, char dl)
{
	int	i;

	i = 0;
	while (*str)
	{
		if (*str == dl)
			str++;
		else if (*str != dl)
		{
			str++;
			i++;
		}
	}
	return (i);
}

char	*word_filler(const char *str, char dl)
{
	int		i;
	int		j;
	char	*word;

	while (str[i] != '\0' && str[i] != dl)
		i++;
	word = (char *)malloc((i + 1) * sizeof(char));
	if (word == NULL)
		return (NULL);
	j = 0;
	while (j < i)
	{
		word[j] = str[j];
		j++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**res;

	if (s == NULL)
		return (NULL);
	res = (char **)malloc((word_count(s, c) + 1) * sizeof(char *));
	if (res == NULL)
		return (NULL);
	while (*s)
	{
		if (*s == c)
			s++;
		if (*s)
		{
			res[i] = word_filler(s, c);
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	return (res);
}

int	main(void)
{
	int i;
	int j;

	char *str = "hello hello hello hello";
	char sp = ' ';
	char **words;

	words = ft_split(str, sp);
	i = 0;
	j = 0;
	while (words[i])
	{
		while (words[i][j])
		{
			printf("%c", words[i][j]);
		}
		i++;
	}
}
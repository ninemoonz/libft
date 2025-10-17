/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.codam.nl>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 15:44:50 by kkweon            #+#    #+#             */
/*   Updated: 2025/10/17 17:02:59 by kkweon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

// char	**ft_split(char const *s, char c)
// {
// 	int	i;
// 	int	j;
// 	int	len;

// 	i = 0;
// 	j = 0;
// 	len = ft_strlen(s);
// 	while (s[i])
// 	{
// 		if (s[i] == c)
// 			j++;
// 		i++;
// 	}
// }

void	ft_split(char const *s, char c)
{
	int			i;
	const char	*splitter;

	i = 0;
	while (s[i])
	{
		printf("char: %c - index: %d - address: %p\n", s[i], i, &s[i]);
		if (s[i] == c)
		{
			splitter = &s[i];
		}
		i++;
	}
	printf("%p\n", splitter);
}

int	main(void)
{
	char *str = "hellicopter hellicopter";
	char sp = 'i';
	ft_split(str, sp);
	return (0);
}
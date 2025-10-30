/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 14:52:14 by kkweon            #+#    #+#             */
/*   Updated: 2025/10/30 14:33:08 by koodal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char test_func(unsigned int i, char c)
{
	if (c >= 'a' && c <= 'z' && i % 2 == 0)
		return (c - 32);
	else
		return (c);
}

size_t ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t		i;
	size_t	len;
	char	*tmp;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	tmp = (char *)malloc((len + 1) * sizeof(char));
	if (!tmp)
		return (NULL);
	i = 0;
	while (i < len)
	{
		tmp[i] = f(i, s[i]);
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}

int	main(void)
{
	char	*str;
	str = "hello world!";
	printf("%s\n", ft_strmapi(str, test_func));
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.codam.nl>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 14:52:14 by kkweon            #+#    #+#             */
/*   Updated: 2025/10/29 17:45:09 by kkweon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
// {
// 	int		i;
// 	char	*tmp;

// 	tmp = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
// 	if (!tmp)
// 		return (NULL);
// 	i = 0;
// 	while (i < ft_strlen(s))
// 	{
// 		tmp[i] = 'a';
// 		i++;
// 	}
// 	tmp[i] = '\0';
// }

char	*ft_check(char const *s)
{
	int		i;
	char	*tmp;

	tmp = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!tmp)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s))
	{
		tmp[i] = 'a';
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}

int	main(void)
{
	char *str = "this is a string";
	printf("%s\n", ft_check(str));
	return (0);
}
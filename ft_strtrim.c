/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.codam.nl>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 16:53:48 by kkweon            #+#    #+#             */
/*   Updated: 2025/10/16 17:01:42 by kkweon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*tmp;
	int		i;

	tmp = (char *)s1;
	i = 0;
	while (tmp[i])
	{
		if ()
	}
	return ();
	// s1: The string to be trimmed.
	// set: The string containing the set of characters to be removed.
}

int	main(void)
{
	char *str = "this is the string to be trimmed";
	char *trim = "is";

	return (0);
}
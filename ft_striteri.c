/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 14:34:28 by koodal            #+#    #+#             */
/*   Updated: 2025/10/30 15:36:11 by koodal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

size_t ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void test_func(unsigned int i, char *c)
{
	if (*c >= 'a' && *c <= 'z' && i % 2 == 0)
		*c = *c - 32;
}

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}

int main (void)
{
	char str[] = "Hello, World!";
	ft_striteri(str, test_func);
	printf("%s\n", str);
	return (0);
}
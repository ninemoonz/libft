/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 14:50:53 by kkweon            #+#    #+#             */
/*   Updated: 2025/10/15 21:12:01 by koodal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int	ft_isspace(char c)
{
	if (c == ' ' || c == '\f' || c == '\n' || c == '\r' || c == '\t' || c == '\v')
		return (1);
	else
		return (0);
}

int ft_atoi(const char *str)
{
	int neg;
	int i;
	int tot;
	char *tmp;

	neg = 1;
	i = 0;
	tot = 0;
	tmp = (char *)str;
	while(ft_isspace(tmp[i]) == 1)
		i++;
	while (tmp[i] >= '0' && tmp[i] <= '9')
	{
		tot = (tot * 10) + (tmp[i] - '0');
		i++;
	}
	return (tot);
}

int	main(void)
{
	char *str = "   	        123";
	int res;

	res = ft_atoi(str);
	printf("%d\n", res);
	return (0);
}
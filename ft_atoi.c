/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.codam.nl>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 14:50:53 by kkweon            #+#    #+#             */
/*   Updated: 2025/10/15 17:59:55 by kkweon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_space(const char *str)
{
	char	*tmp;

	tmp = (char *)str;
	while ((*tmp >= 0 && *tmp <= 31) || *tmp == ' ')
		tmp++;
	return (tmp);
}

int	ft_atoi(const char *str)
{
	int	neg_flag;
	int	res;

	str = ft_space(str);
	neg_flag = 1;
	res = 0;
	if (*str == '-')
		neg_flag = neg_flag * -1;
	while (*str >= '0' && *str <= '9')
	{
		res = (res * 10) + (*str - '0');
	}
	return (res * neg_flag);
}

void	atoi_checker(const char *str)
{
	int	res;
	int	ft_res;

	res = atoi(str);
	ft_res = ft_atoi(str);
	printf("res: %d\n", res);
	printf("ft_res: %d\n", ft_res);
}

int	main(void)
{
	char *str = "123";
	atoi_checker(str);
	return (0);
}
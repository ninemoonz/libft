/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.codam.nl>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 14:50:53 by kkweon            #+#    #+#             */
/*   Updated: 2025/10/15 15:25:10 by kkweon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_atoi(const char *str)
{
	char	*tmp_str;
	int		i;
	int		res_i;
	int		flag;

	tmp_str = (char *)str;
	i = 0;
	res_i = 0;
	flag = 1;
	while (tmp_str[i])
	{
		if (tmp_str[i] == 43)
			i++;
		if (tmp_str[i] == 45)
			flag = flag * -1;
		if (tmp_str[i] >= 48 && tmp_str[i] <= 57)
		{
			if (tmp_str[i + 1] < 48 || tmp_str[i] > 58)
				break ;
			res_i = (res_i * 10) + tmp_str[i] - 48;
		}
		i++;
	}
	return (res_i * flag);
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
	char *str = "   --12a3";
	atoi_checker(str);
	return (0);
}
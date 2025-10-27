/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.codam.nl>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 14:50:53 by kkweon            #+#    #+#             */
/*   Updated: 2025/10/27 14:10:50 by kkweon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\f' || c == '\n' || c == '\r' || c == '\t'
		|| c == '\v')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	int	neg;
	int	i;
	int	tot;

	neg = 1;
	i = 0;
	tot = 0;
	while (ft_isspace(str[i]) == 1)
		i++;
	if (str[i] == '+')
	{
		if (str[i + 1] != '-')
			i++;
	}
	else if (str[i] == '-')
	{
		neg = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		tot = (tot * 10) + (str[i] - '0');
		i++;
	}
	return (tot * neg);
}

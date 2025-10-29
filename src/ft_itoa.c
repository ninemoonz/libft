/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.codam.nl>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 18:33:32 by kkweon            #+#    #+#             */
/*   Updated: 2025/10/29 16:13:56 by kkweon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	digit_gen(int n)
{
	int	digit_count;

	digit_count = 0;
	if (n < 0)
	{
		n = n * -1;
		digit_count++;
	}
	while (n != 0)
	{
		n = n / 10;
		digit_count++;
	}
	return (digit_count);
}

char	*ft_itoa(int n)
{
	int		digit;
	int		reverse_digit;
	int		i;
	char	*res;

	digit = digit_gen(n);
	reverse_digit = digit;
	res = (char *)malloc((digit + 1) * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	if (n < 0)
	{
		n = n * -1;
		res[0] = '-';
		i++;
	}
	while (reverse_digit > i)
	{
		reverse_digit--;
		res[reverse_digit] = (n % 10) + '0';
		n = n / 10;
	}
	res[digit] = '\0';
	return (res);
}

int	main(void)
{
	int num;
	char *res;

	num = -123;
	res = ft_itoa(num);
	printf("%s\n", res);
	return (0);
}
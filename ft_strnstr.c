/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.codam.nl>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 12:56:08 by kkweon            #+#    #+#             */
/*   Updated: 2025/10/13 17:33:48 by kkweon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *big, const char *small, size_t len)
{
	size_t	i;
	size_t	j;
	char	*tmp_big;
	char	*tmp_small;

	tmp_big = (char *)big;
	tmp_small = (char *)small;
	if (small == NULL || small[0] == 0)
		return (tmp_big);
	i = 0;
	while (tmp_big[i] != '\0' && (len - 1) > 0)
	{
		j = 0;
		while (tmp_small[j] != '\0')
		{
			if (tmp_big[i + j] == tmp_small[j])
				j++;
			else
				break ;
		}
		if (tmp_small[j] == '\0')
			return (&tmp_big[i]);
		i++;
		len--;
	}
	return (0);
}

void	strnstr_check(char *str1, char *str2, size_t len)
{
	printf("\nstrnstr result: %s\n", strnstr(str1, str2, len));
	printf("ft_strnstr result: %s\n\n", ft_strnstr(str1, str2, len));
}

int	main(void)
{
	char *big_str = "that is a big string";
	char *small_str = "ig";
	strnstr_check(big_str, small_str, 13);

	return (0);
}
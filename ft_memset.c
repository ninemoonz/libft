/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.codam.nl>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 17:48:01 by kkweon            #+#    #+#             */
/*   Updated: 2025/10/09 10:59:46 by kkweon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memset(void *dest, int c, unsigned int count)
{
	unsigned int i;
	char *char_p;

	char_p = dest;
	i = 0;
	while (count > 0)
	{
		*char_p = c;
		char_p++;
		printf("%p\n", char_p);
		count--;
	}
	return (dest);
}
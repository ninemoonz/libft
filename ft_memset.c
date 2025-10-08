/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.codam.nl>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 17:48:01 by kkweon            #+#    #+#             */
/*   Updated: 2025/10/08 17:58:25 by kkweon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memset(void *dest, int c, size_t count)
{
}

int	main(void)
{
	char buffer[] = "This is very important string";
	printf("Before: %s\n", buffer);
	memset(buffer, '-', 4);
	printf("After: %s\n", buffer);
	return (0);
}
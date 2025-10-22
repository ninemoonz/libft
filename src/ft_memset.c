/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.codam.nl>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 17:48:01 by kkweon            #+#    #+#             */
/*   Updated: 2025/10/22 16:11:15 by kkweon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		count--;
	}
	return (dest);
}
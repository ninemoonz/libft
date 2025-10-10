/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.codam.nl>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 13:53:47 by kkweon            #+#    #+#             */
/*   Updated: 2025/10/10 17:10:03 by kkweon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int init)
{
	int i;
	char *tmp_str;

	i = 0;
	tmp_str = (char *)str;
	while (str[i] != '\0')
	{
		if (str[i] == init)
			return (&tmp_str[i]);
		i++;
	}
	return (NULL);
}
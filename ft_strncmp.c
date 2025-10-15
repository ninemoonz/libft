/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkweon <kkweon@student.codam.nl>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 16:51:50 by kkweon            #+#    #+#             */
/*   Updated: 2025/10/13 11:13:47 by kkweon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int i;
	char *s1_c;
	char *s2_c;

	i = 0;
	s1_c = (char *)s1;
	s2_c = (char *)s2;
	while (i < n && s1[i] == s2[i])
		i++;
	return (s1_c[i] - s2_c[i]);
}
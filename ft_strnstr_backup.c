/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koodal <koodal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:25:31 by koodal            #+#    #+#             */
/*   Updated: 2025/10/14 14:46:17 by koodal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char *ft_strnstr(const char *big, const char *small, size_t len)
{
    char *tmp_big;
    char *tmp_small;
    size_t i;
    size_t j;

    tmp_big = (char *)big;
    tmp_small = (char *)small;
    if (small[0] == 0)
        return (tmp_big);
    i = 0;
    while (tmp_big[i] != '\0' && len  > 0)
    {
        j = 0;
        if (tmp_small[j] != '\0' && tmp_small[j] == tmp_big[i + j])
        {
            j++;   
        }
        return (&tmp_big[i]);
        i++;
        len--;
    }
    return (NULL);
}

void strnstr_check(char *big, char *small, size_t len)
{
    char *res;
    char *res2;

    res = strnstr(big, small, len);
    res2 = ft_strnstr(big, small, len);
    printf("strnstr result: %s\n", res);
    printf("ft_strnstr result: %s\n", res2);
}

int main(void)
{
    char *big = "this is a big string";
    char *small = "big";
    size_t len;

    len = 13;
    strnstr_check(big, small, len);
    return(0);
}
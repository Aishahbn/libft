/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaninas <abaninas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 15:00:46 by abaninas          #+#    #+#             */
/*   Updated: 2026/10/01 16:18:08 by abaninas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int num_len(int n)
{
    int len;

    len = 0;
    if (n <= 0)
    {
        len++;
        n *=-1;
    }
    while ( n > 0)
    {
        n /=10;
        len++;
    }
    return (len);
}
char    *ft_itoa(int n)
{
    char *str;
    int len;
    int i;

    len = num_len(n);
    str = malloc(len + 1);
    i = 0;
    if (n < 0)
    {
        str[i] = '-';
        i++;
        n *= -1;
    }
    while (n > 0)
    {
        str[i] = 
    }
}
int main (void)
{
    int len = num_len(-0);
    printf("%d\n", len);
    return (0);
}
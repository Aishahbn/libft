/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaninas <abaninas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 16:34:03 by abaninas          #+#    #+#             */
/*   Updated: 2026/10/12 16:19:29 by abaninas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*int main(void)
{
	printf("A: %d\n", ft_isdigit('A'));
	printf("5: %d\n", ft_isdigit('5'));
	printf("@: %d\n", ft_isdigit('@'));
	printf("0: %d\n", ft_isdigit('0'));
	printf("space: %d\n", ft_isdigit(' '));
	return (0);
}*/
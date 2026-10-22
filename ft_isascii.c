/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaninas <abaninas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 16:33:59 by abaninas          #+#    #+#             */
/*   Updated: 2026/10/15 12:54:10 by abaninas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*int main(void)
{
	printf("A: %d\n", ft_isascii('A'));
	printf("0: %d\n", ft_isascii('0'));
	printf("#: %d\n", ft_isascii('#'));
	printf("128: %d\n", ft_isascii(128));
	printf("space: %d\n", ft_isascii(' '));
	printf("-1: %d\n", ft_isascii(-1));
}*/
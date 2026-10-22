/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaninas <abaninas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 16:34:07 by abaninas          #+#    #+#             */
/*   Updated: 2026/10/15 12:54:02 by abaninas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*int main(void)
{
	printf("A: %d\n", ft_isprint('A'));
	printf("31: %d\n", ft_isprint(31));
	printf("@: %d\n", ft_isprint('@'));
	printf("127: %d\n", ft_isprint(127));
	printf("space: %d\n", ft_isprint(' '));
	return (0);
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaninas <abaninas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 16:33:50 by abaninas          #+#    #+#             */
/*   Updated: 2026/10/12 15:31:22 by abaninas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}

/*int main(void)
{
	printf("A: %d\n", ft_isalnum('A'));
	printf("z: %d\n", ft_isalnum('z'));
	printf("7: %d\n", ft_isalnum('7'));
	printf("@: %d\n", ft_isalnum('@'));
	printf("space: %d\n", ft_isalnum(' '));
	printf("0: %d\n", ft_isalnum('0'));
	return (0);
}*/
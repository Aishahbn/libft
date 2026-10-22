/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaninas <abaninas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 16:31:30 by abaninas          #+#    #+#             */
/*   Updated: 2026/10/15 11:44:35 by abaninas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
/*int main(void)
{
	printf("A: %d\n", ft_isalpha('A'));
	printf("5: %d\n", ft_isalpha('5'));
	printf("@: %d\n", ft_isalpha('@'));
	printf("0: %d\n", ft_isalpha('0'));
	printf("space: %d\n", ft_isalpha(' '));
	return (0);
}*/
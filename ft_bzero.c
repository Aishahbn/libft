/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaninas <abaninas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 16:33:42 by abaninas          #+#    #+#             */
/*   Updated: 2026/10/21 13:33:44 by abaninas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*int main(void)
{
	char	str[] = "Hello";

	printf("Before: %s\n", str);
	ft_bzero(str, 1);
	printf("After: %c\n", str[0]);
	return (0);
}*/
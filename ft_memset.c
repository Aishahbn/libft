/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaninas <abaninas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 16:34:45 by abaninas          #+#    #+#             */
/*   Updated: 2026/10/21 13:10:55 by abaninas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	value;

	i = 0;
	ptr = (unsigned char *)s;
	value = (unsigned char)c;
	while (i < n)
	{
		ptr[i] = value;
		i++;
	}
	return (s);
}

/*int	main(void)
{
	char	str[20] = "Hello World";

	ft_memset(str, 'a', 5);
	printf("%s\n", str);
	return (0);
}*/

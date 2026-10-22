/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaninas <abaninas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 16:34:38 by abaninas          #+#    #+#             */
/*   Updated: 2026/10/21 16:31:08 by abaninas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;		
	unsigned char		*d;
	const unsigned char	*s;		

	i = 0;
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*int	main(void)
{
	char	dest[20];

	ft_memcpy(dest, "Hello", 6);
	printf("%s\n", dest);
	return (0);
}*/

#include <stdio.h>
int main(void)
{
	 char dest[6] ="raghad";
	 char src[]="ggggg";
	printf("%s\n", dest);
	ft_memcpy(dest, src,sizeof(char));
	printf("%s\n", dest);
	return(0);
}

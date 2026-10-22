/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaninas <abaninas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 16:35:21 by abaninas          #+#    #+#             */
/*   Updated: 2026/10/20 17:08:23 by abaninas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last;	

	last = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
			last = s;
		s++;
	}
	if ((char) c == '\0')
		return ((char *)s);
	return ((char *)last);
}

/*int	main(void)
{
	char	str[] = "Hello World";

	printf("%s\n", ft_strrchr(str, 'o'));
	return (0);
}*/
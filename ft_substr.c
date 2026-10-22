/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaninas <abaninas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 14:34:21 by abaninas          #+#    #+#             */
/*   Updated: 2026/10/20 14:59:21 by abaninas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	s_len;
	size_t	sub_len;

	s_len = ft_strlen(s);
	if (start >= s_len)
		sub_len = 0;
	else if (len > s_len - start)
		sub_len = s_len - start;
	else
		sub_len = len;
	sub = malloc(sub_len + 1);
	if (sub == NULL)
		return (NULL);
	ft_memcpy(sub, s + start, sub_len);
	sub[sub_len] = '\0';
	return (sub);
}
/*int	main(void)
{
	char	*sub;

	sub = ft_substr("Hello World", 6, 5);
	printf("%s\n", sub);
	free(sub);
	return (0);
}*/
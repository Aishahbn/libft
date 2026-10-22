/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaninas <abaninas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 16:34:56 by abaninas          #+#    #+#             */
/*   Updated: 2026/10/15 12:53:21 by abaninas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*copy;
	size_t	len;

	len = ft_strlen(s);
	copy = malloc(len + 1);
	if (copy == NULL)
		return (NULL);
	ft_memcpy(copy, s, len + 1);
	return (copy);
}
/*int	main(void)
{
	char	*copy;

	copy = ft_strdup("Hello World");
	printf("%s\n", copy);
	free(copy);
	return (0);
}*/

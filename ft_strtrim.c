/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaninas <abaninas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 12:12:28 by abaninas          #+#    #+#             */
/*   Updated: 2026/10/20 17:08:00 by abaninas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*result;

	start = 0;
	end = ft_strlen(s1);
	while (start < end && is_in_set(s1[start], set))
		start++;
	while (end > start && is_in_set(s1[end - 1], set))
		end--;
	len = end - start;
	result = malloc(len + 1);
	if (result == NULL)
		return (NULL);
	ft_memcpy(result, s1 + start, len);
	result[len] = '\0';
	return (result);
}

/*int main(void)
{
	char	*result;

	result = ft_strtrim("  Hello World  ", " ");
	printf("%s\n", result);
	free(result);
	return (0);
}*/
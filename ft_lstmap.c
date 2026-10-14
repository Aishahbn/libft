/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaninas <abaninas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 15:32:03 by abaninas          #+#    #+#             */
/*   Updated: 2026/10/14 15:50:04 by abaninas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*content;

	new_list = NULL;
	while (lst != NULL)
	{
		content = f(lst->content);
		if (content == NULL)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		new_node = ft_lstnew(content);
		if (new_node == NULL)
		{
			del(content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

void	*make_upper(void *content)
{
	char	*src;
	char	*dst;
	int		i;

	src = (char *)content;
	dst = malloc(strlen(src) + 1);
	if (dst == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = toupper((unsigned char)src[i]);
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

void	del_content(void *content)
{
	free(content);
}

/*int	main(void)
{
	t_list	*a;
	t_list	*b;
	t_list	*new_list;

	a = ft_lstnew(strdup("hello"));
	b = ft_lstnew(strdup("world"));
	if (a == NULL || b == NULL)
		return (1);
	a->next = b;
	new_list = ft_lstmap(a, make_upper, del_content);
	if (new_list == NULL)
		return (1);
	printf("%s\n", (char *)new_list->content);
	printf("%s\n", (char *)new_list->next->content);
	ft_lstclear(&a, del_content);
	ft_lstclear(&new_list, del_content);
	return (0);
}*/
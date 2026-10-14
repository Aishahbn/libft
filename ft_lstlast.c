/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaninas <abaninas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 13:36:52 by abaninas          #+#    #+#             */
/*   Updated: 2026/10/14 15:47:11 by abaninas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

/*int main (void)
{
	t_list	*a;
	t_list	*b;
	t_list	*c;
	t_list	*last;

	a = ft_lstnew("hello");
	b = ft_lstnew("42");
	c = ft_lstnew("World");
	a->next = b;
	b->next = c;
	last = ft_lstlast(a);
	printf("%s\n", (char *)last->content);
	return (0);
}*/
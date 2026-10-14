/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaninas <abaninas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 13:36:56 by abaninas          #+#    #+#             */
/*   Updated: 2026/10/14 13:37:06 by abaninas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	count;

	count = 0;
	while (lst != NULL)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
/*int main(void)
{
	t_list	*a;
	t_list	*b;
	t_list	*c;
	t_list	*d;

	a = ft_lstnew("New");
	b = ft_lstnew("A");
	c = ft_lstnew("Hello");
	d = ft_lstnew("ff");
	a->next = b;
	b->next = c;
	c->next = d;
	printf("%u\n", ft_lstsize(a));
	return (0);
}*/
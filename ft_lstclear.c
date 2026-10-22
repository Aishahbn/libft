/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaninas <abaninas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 15:20:28 by abaninas          #+#    #+#             */
/*   Updated: 2026/10/15 12:54:25 by abaninas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (lst == NULL || del == NULL)
		return ;
	while (*lst != NULL)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
}

	/*int main(void)
	{
		t_list	*a;
		t_list	*b;

		a = ft_lstnew(malloc(10));
		b = ft_lstnew(malloc(10));
		if (a == NULL || b == NULL)
			return (1);
		a->next = b;
		ft_lstclear(&a, del_content);
		if (a == NULL)
			printf("List cleared.\n");
		return(0);
	}*/
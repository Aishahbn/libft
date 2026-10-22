/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaninas <abaninas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 13:36:46 by abaninas          #+#    #+#             */
/*   Updated: 2026/10/15 12:53:58 by abaninas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = *lst;
	while (last->next != NULL)
		last = last->next;
	last->next = new;
}

/*int main (void)
{
	t_list	*a;
	t_list	*b;

	a = ft_lstnew("A");
	b = ft_lstnew("B");
	if (a == NULL || b == NULL)
		return (1);
	ft_lstadd_back(&a, b);
	printf("%s\n", (char *)a->content);
	printf("%s\n", (char *)a->next->content);
	return (0);
}*/
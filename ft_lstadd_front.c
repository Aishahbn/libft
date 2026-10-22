/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaninas <abaninas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 13:38:39 by abaninas          #+#    #+#             */
/*   Updated: 2026/10/15 12:53:57 by abaninas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}
/*int main(void)
{
	t_list	*a;
	t_list	*b;

	a = ft_lstnew("A");
	b = ft_lstnew("New");
	ft_lstadd_front(&a, b);
	printf("%s\n", (char *)a->content);
	printf("%s\n", (char *)a->next->content);
	free(a->next);
	free(a);
	return (0);
}*/

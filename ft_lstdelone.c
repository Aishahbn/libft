/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaninas <abaninas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 15:20:36 by abaninas          #+#    #+#             */
/*   Updated: 2026/10/15 13:01:16 by abaninas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	free(lst);
}
/*int main(void)
{
	t_list *node;

	node = ft_lstnew(malloc(10));
	if (node == NULL)
		return (1);
	ft_lstdelone(node, del_content);
	printf("Node deleted:)\n");
	return (0);
}*/
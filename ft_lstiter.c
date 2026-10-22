/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaninas <abaninas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 15:20:42 by abaninas          #+#    #+#             */
/*   Updated: 2026/10/15 14:29:42 by abaninas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL || f == NULL)
		return ;
	while (lst != NULL)
	{
		f (lst->content);
		lst = lst->next;
	}
}

/*void	print_content(void *content)
{
	printf("%s\n", (char *)content);
}
	*/
/*int	main(void)
{
	t_list	*a;
	t_list	*b;

	a = ft_lstnew("Hello");
	b = ft_lstnew("World");
	if (a == NULL || b == NULL)
		return (1);
	a->next = b;
	ft_lstiter(a, print_content);
	free(b);
	free(a);
	return (0);
}*/

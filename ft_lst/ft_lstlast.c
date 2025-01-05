/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraad <eraad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:38:48 by eraad             #+#    #+#             */
/*   Updated: 2024/12/03 15:38:48 by eraad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst);

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*
int main(void)
{
	t_list *node1 = ft_lstnew("Test1");
	t_list *node2 = ft_lstnew("Test2");
	t_list *node3 = ft_lstnew("Test3");
	node1->next = node2;
	node2->next = node3;
	t_list *last_node = ft_lstlast(node1);
	printf("Last element : %s\n", (char *)last_node->content);
}
*/
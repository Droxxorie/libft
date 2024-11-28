/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 12:09:59 by marvin            #+#    #+#             */
/*   Updated: 2024/11/28 12:09:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new);

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *last;

    if (!lst || !new)
        return;
    if (!*lst)
        *lst = new;
    else
    {
        last = ft_lstlast(*lst);
        last->next = new;
    }
}
/*
int main(void)
{
    t_list *node1 = ft_lstnew("Test1");
    t_list *node2 = ft_lstnew("Test2");
    t_list *node3 = ft_lstnew("Test3");
    t_list *node4 = ft_lstnew("Test4");

    node1->next = node2;
    node2->next = node3;

    ft_lstadd_back(&node1, node4);
    t_list *lst = node1;
    int i = 1;
    while (lst)
    {
        printf("%i : %s\n", i, (char *)lst->content);
        i++;
        lst = lst->next;
    }
}
*/
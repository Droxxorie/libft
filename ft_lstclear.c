/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 10:32:14 by marvin            #+#    #+#             */
/*   Updated: 2024/11/29 10:32:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *));

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *temp;

    if (!*lst || !del)
        return;   
    while (*lst)
    {
        temp = (*lst)->next;
        ft_lstdelone(*lst, del);
        *lst = temp;
    }
    *lst = NULL;
}
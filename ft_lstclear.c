/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achraiti <achraiti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 20:16:53 by achraiti          #+#    #+#             */
/*   Updated: 2024/03/22 20:39:29 by achraiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void    del(void *content)
{
    if (content == NULL)
        return ;
    content = NULL;
}

void    ft_lstclear(t_list **lst, void (*del)(void*))
{
    if (!lst || !del)
        return ;
    t_list  *start;
    t_list  *tmp;

    start = *lst;
    while (start != NULL)
	{
		tmp = start->next;
        del(start->content);
        free(start);
        start = tmp;
	}
    *lst = NULL;
}

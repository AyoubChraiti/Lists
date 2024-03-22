/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achraiti <achraiti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 19:39:28 by achraiti          #+#    #+#             */
/*   Updated: 2024/03/22 19:44:22 by achraiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_list  *ft_lstlast(t_list *lst)
{
    t_list	*start;

	if (lst == NULL)
		return (0);
	start = lst;
	while (start != NULL)
	{
		if (start->next == NULL)
            return (start);
		start = start->next;
	}
	return (NULL);
}

// int main()
// {
// 	t_list *a = ft_lstnew("ss");
// 	t_list *b = ft_lstnew("ss");
// 	t_list *c = ft_lstnew("ss");
// 	t_list *d = ft_lstnew("im the last");
	
// 	a->next = b;
// 	b->next = c;
// 	c->next = d;
// 	d->next = NULL;

//     t_list *last = ft_lstlast(a);
// 	printf("last element = %s\n", (char *)last->content);
// }
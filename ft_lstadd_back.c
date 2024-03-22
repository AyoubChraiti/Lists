/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achraiti <achraiti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 19:53:14 by achraiti          #+#    #+#             */
/*   Updated: 2024/03/22 20:40:18 by achraiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	t_list *start;

	start = *lst;
	while (start != NULL)
	{
		if (start->next == NULL)
            break ;
		start = start->next;
	}
	start->next = new;
	new->next = NULL;
}

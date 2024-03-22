/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achraiti <achraiti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 17:47:27 by achraiti          #+#    #+#             */
/*   Updated: 2024/03/22 20:40:13 by achraiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "header.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
        return;

	new->next = *lst;
	*lst = new;
}

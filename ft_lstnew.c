/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achraiti <achraiti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 16:49:56 by achraiti          #+#    #+#             */
/*   Updated: 2024/03/22 17:44:50 by achraiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*x;
	
	x = (t_list *)malloc(sizeof(t_list));
	x->content = content;
	x->next = NULL;
	return (x);
}

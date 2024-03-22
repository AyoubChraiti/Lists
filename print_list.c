/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achraiti <achraiti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 17:43:57 by achraiti          #+#    #+#             */
/*   Updated: 2024/03/22 20:27:33 by achraiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	print_list(t_list *head)
{
	if (head == NULL)
		return ;
	t_list  *list;

	list = head;
	while (list != NULL)
	{
		printf("%s\n", (char *)list->content);
		list = list->next;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achraiti <achraiti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 17:56:22 by achraiti          #+#    #+#             */
/*   Updated: 2024/03/23 18:01:16 by achraiti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int main()
{
    t_list *f;

    f = ft_lstnew("str");
    f->content = (char *)malloc(500);
    ft_lstadd_front(&f, s);
    s = "ssss";
    ft_lstclear(&f, del);
}
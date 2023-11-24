/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahanaf <ahanaf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 12:09:15 by ahanaf            #+#    #+#             */
/*   Updated: 2023/11/24 12:15:53 by ahanaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *tmp;
    
    while(*lst)
    {
        
        tmp = (*lst)->next;
        ft_lstdelone(*lst,del);
        *lst  = tmp;
    }
    free(*lst);
    *lst = NULL;
}
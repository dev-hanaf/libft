/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahanaf <ahanaf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 23:06:48 by ahanaf            #+#    #+#             */
/*   Updated: 2023/11/24 02:46:47 by ahanaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*int main()
{
	t_list *head = ft_lstnew("hello");
    t_list *new;
    new = malloc(sizeof(t_list));
    new->content = "new";
    new->next = NULL;
    ft_lstadd_front(&head,new);
	printf("%s\n",(char*)head->next->content);	
}*/
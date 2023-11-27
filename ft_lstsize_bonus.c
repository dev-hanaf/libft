/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahanaf <ahanaf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 02:45:52 by ahanaf            #+#    #+#             */
/*   Updated: 2023/11/25 18:33:37 by ahanaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*tmp;
	int		i;

	if (!lst)
		return (0);
	tmp = lst;
	i = 0;
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}

/*void ft_lstadd_back(t_list **lst, t_list *new)
{
 if (*lst == NULL)
    {
        *lst = new;
    }
    else
    {
        t_list *last = *lst;
        while (last->next != NULL)
        {
            last = last->next;
        }
        last->next = new;
    }
}*/
/*int main()
{
    
    t_list *head = ft_lstnew("hello");
    
    t_list *new = ft_lstnew("world");

    //t_list *new2 = ft_lstnew("!!");

    ft_lstadd_front(&head,new);

    //ft_lstadd_back(&head,new);
    //ft_lstadd_back(&head,new2);

    printf("%d\n",ft_lstsize(head));
*/
/*    t_list *head;
    head = malloc(sizeof(t_list));
    
    head->content = "zero";
    head->next = NULL;

    t_list *new;
    new = malloc(sizeof(t_list));
    
    new->content = "first";
    new->next = NULL;
    
    head->next = new;

    printf("%d\n",ft_lstsize(head));*/
//}*/
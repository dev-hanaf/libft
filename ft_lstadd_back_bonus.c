/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahanaf <ahanaf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 08:10:11 by ahanaf            #+#    #+#             */
/*   Updated: 2023/11/26 01:07:19 by ahanaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!lst)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		tmp = *lst;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
}

/*void printdata(t_list  *lst)
{
     t_list *tmp;

    tmp = lst;
    while(tmp)
    {
        printf("%s\n",(char *)tmp->content);
        tmp = tmp->next;
    }
}*/

/*int	main(void)
{
    t_list *head;
    head = malloc(sizeof(t_list));
    head->content = "zero";
    head->next = NULL;

    t_list *head2;
    head2 = malloc(sizeof(t_list));
    head2->content = "one";
    head2->next = NULL;

    head->next = head2;
    t_list *head3;
    head3 = malloc(sizeof(t_list));
    head3->content = "two";
    head3->next = NULL;

    ft_lstadd_back(&head,head3);

    printf("%s\n",(char *)head->content);
    printf("%s\n",(char *)head->next->content);

    printf("%s\n",(char *)head->next->next->content);

    

}*/
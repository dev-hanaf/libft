/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahanaf <ahanaf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 08:10:11 by ahanaf            #+#    #+#             */
/*   Updated: 2023/11/24 12:05:01 by ahanaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *last;
    last = ft_lstlast(*lst);
    if (!last)
        *lst = new;
    last->next = new;
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
}
int main()
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

    head2->next = head3;


    t_list *head4;
    head4 = malloc(sizeof(t_list));
    head4->content = "three";
    head4->next = NULL;

printdata(head);
    ft_lstadd_back(&head,head4);

    printf("------------------\n");
    printdata(head);

}*/
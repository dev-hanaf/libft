/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printdata.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahanaf <ahanaf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 06:42:49 by ahanaf            #+#    #+#             */
/*   Updated: 2023/11/24 06:45:18 by ahanaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

struct node
{
    int data;
    struct node *link;    
};

void printdata(struct node *lst)
{
    struct node *tmp;

    tmp = lst;
    while(tmp)
    {
        printf("%d\n",tmp->data);
        tmp = tmp->link;
    }
}


int main()
{
    struct node *head;

    head = malloc(sizeof(struct node));
    head->data = 0;
    head->link  = NULL;

    struct node *head2;
    head2 = malloc(sizeof(struct node));
    head2->data = 1;
    head2->link  = NULL;

   head->link = head2;

    printdata(head);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstsize.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahanaf <ahanaf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 06:29:23 by ahanaf            #+#    #+#             */
/*   Updated: 2023/11/24 06:38:36 by ahanaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

struct node
{
    int data;
    struct node *link;    
};

int lstsize(struct node *lst)
{
    struct node *tmp;
    int i = 0;

    tmp = lst;
    while(tmp)
    {
        i++;
        tmp = tmp->link;
    }
    return (i);
}


int main()
{
    struct node *head;

    head = malloc(sizeof(struct node));
    head->data = 0;
    head->link  = NULL;

    struct node *head2;
    head2 = malloc(sizeof(struct node));
    head2->data = 0;
    head2->link  = NULL;

    head->link = head2;
    printf("%d",lstsize(head));  
}
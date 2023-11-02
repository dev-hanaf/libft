/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahanaf <ahanaf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:57:30 by ahanaf            #+#    #+#             */
/*   Updated: 2023/11/02 21:58:01 by ahanaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char* str)
{
    size_t lenght;
    
    lenght = 0;
    if (*str == '\0')
        return ;
    while (str[lenght])
        lenght++;
    return (lenght);
}

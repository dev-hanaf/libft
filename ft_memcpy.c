/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahanaf <ahanaf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 22:31:16 by ahanaf            #+#    #+#             */
/*   Updated: 2023/11/26 01:22:37 by ahanaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (src == dest)
		return (dest);
	i = 0;
	if (n > 0)
	{
		while (((unsigned char *)src)[i] && i < n)
		{
			(((unsigned char *)dest)[i]) = (((unsigned char *)src)[i]);
			i++;
		}
	}
	return ((void *)dest);
}
/*
int main()
{
    printf("%s\n", (char *)ft_memcpy("dst","dst",3));
    
    //const char *src2 = "hello";
    //char *dst2 = "hello";
    //memcpy(dst2,src2,3);
    //printf("dyalhom => %s\n",dst2);
    
}*/

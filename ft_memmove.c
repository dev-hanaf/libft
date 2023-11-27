/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahanaf <ahanaf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 02:08:52 by ahanaf            #+#    #+#             */
/*   Updated: 2023/11/26 01:22:54 by ahanaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*temp_dest;
	unsigned char	*temp_src;

	temp_dest = (unsigned char *)dest;
	temp_src = (unsigned char *)src;
	if (dest == src)
		return (dest);
	if (src > dest)
	{
		i = 0;
		while (i < n)
		{
			temp_dest[i] = temp_src[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			i--;
			temp_dest[i] = temp_src[i];
		}
	}
	return (dest);
}

/*int main()
{
    char *str = "hanaf";
    char *dest;
    dest = str;
    memmove(dest,str,5);
    printf("dest => :%s: &&& src ==> :%s:\n",dest,str);
    printf("----------------------------------------\n");
    char *str2 = "hanaf";
    char *dest2;
    dest2 = str2;
    ft_memmove(dest2,str2,5);
    printf("dest2 => :%s: &&& src2 ==> :%s:\n",dest2,str2);

}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahanaf <ahanaf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 22:31:16 by ahanaf            #+#    #+#             */
/*   Updated: 2023/11/18 02:08:42 by ahanaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!src)
		return (NULL);
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

/*int main()
{
    const char *src = "hello";
    char *dst = "hello";
    ft_memcpy(dst,src,5);
    printf("dyali => %s\n",dst);
    
    //const char *src2 = "hello";
    //char *dst2 = "hello";
    //memcpy(dst2,src2,3);
    //printf("dyalhom => %s\n",dst2);
    
}*/

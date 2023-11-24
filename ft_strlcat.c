/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahanaf <ahanaf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 08:16:43 by ahanaf            #+#    #+#             */
/*   Updated: 2023/11/18 08:25:35 by ahanaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_src;
	size_t	len_dst;
	size_t	i;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	i = 0;
	if (size == 0 && !dst)
		return (len_dst + len_src);
	if (size != 0)
	{
		while (src[i] && (len_dst + i < size - 1))
		{
			dst[len_dst + i] = src[i];
			i++;
		}
	}
	dst[len_dst + i] = 0;
	if (size > len_dst)
		return (len_dst + len_src);
	else
		return (size + len_src);
}

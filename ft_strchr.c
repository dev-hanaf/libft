/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahanaf <ahanaf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 23:51:31 by ahanaf            #+#    #+#             */
/*   Updated: 2023/11/17 00:39:15 by ahanaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while ((char)c != s[i])
	{
		if (s[i] == '\0')
			return (NULL);
		i++;
	}
	return ((char *)(s + i));
}

/*int	main(int ac, char **av)
{
	//char *str ="";
	//char c = 'x';
	(void)ac;
	printf("dyali => :%s:\n", ft_strchr(av[1], atoi(av[2])));
	printf("dyalhom => :%s:\n", strchr(av[1], atoi(av[2])));
}*/
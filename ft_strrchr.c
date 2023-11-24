/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahanaf <ahanaf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 00:39:47 by ahanaf            #+#    #+#             */
/*   Updated: 2023/11/18 06:55:21 by ahanaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*res;
	char	cc;

	cc = (char)c;
	res = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == cc)
			res = (char *)&s[i];
		i++;
	}
	if (s[i] == c)
		res = (char *)&s[i];
	return (res);
}

/*
int	main(int ac, char **av)
{
	//char *str ="";
	char c = 'l';
	(void)ac;
	printf("dyali => :%s:\n", ft_strrchr(av[1], c));
	printf("dyalhom => :%s:\n", strrchr(av[1], c));
}*/
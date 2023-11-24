/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahanaf <ahanaf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:07:14 by ahanaf            #+#    #+#             */
/*   Updated: 2023/11/16 22:25:48 by ahanaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	test_long(unsigned long long *result, int signe)
{
	unsigned long long	llun;

	llun = 18446744073709551615ULL;
	if ((*result == llun) || (*result > llun && (*result % 10) > 5))
	{
		if (signe == 1)
			return (-1);
		else if (signe == -1)
			return (0);
	}
	if ((*result == LLONG_MAX) || (*result > LLONG_MAX && ((*result % 10) > 7)))
	{
		if (signe == 1)
			return (-1);
		else if (signe == -1)
			return (0);
	}
	return (123);
}

int	ft_atoi(const char *str)
{
	int					i;
	int					sign;
	unsigned long long	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		result = (result * 10) + (str[i] - '0');
		if (test_long(&result, sign) != 123)
			return (test_long(&result, sign));
		i++;
	}
	return (result * sign);
}

/*int	main(void)
{
	printf("\n");
	printf("Dyali => %d\n", ft_atoi("-100000"));
	printf("Dyalhom => %d\n", atoi("-100000"));
}*/

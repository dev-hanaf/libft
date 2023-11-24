/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahanaf <ahanaf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 05:04:41 by ahanaf            #+#    #+#             */
/*   Updated: 2023/11/23 22:51:56 by ahanaf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int		counter;
	size_t	i;

	i = 0;
	counter = 0;
	while (s != NULL && i < ft_strlen(s))
	{
		while (s[i] == c)
			i++;
		if (s[i] != c)
			counter++;
		while (s[i] != c)
			i++;
		while (s[i] == c)
			i++;
	}
	return (counter);
}

static void	start_end(const char *s, char c, size_t *start, size_t *end)
{
	size_t	temp;

	while (*start < ft_strlen(s))
	{
		while (s[*start] == c)
			*start = *start + 1;
		if (s[*start] != c)
			temp = *start;
		while (s[*start] != c)
			*start = *start + 1;
		if (s[*start] == c)
			*end = *start;
		*start = temp;
		break ;
	}
}

static char	*get_word(const char *s, size_t start, size_t end)
{
	char	*word;
	size_t	i;

	word = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!word)
		return (NULL);
	i = 0;
	while ((i + start) < end)
	{
		word[i] = s[start + i];
		i++;
	}
	word[i] = 0;
	return (word);
}

static void	*free_str(char **str)
{
	size_t	i;

	i = 0;
	while (str[i])
		free(str[i++]);
	free(str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	start;
	size_t	end;
	int		i;

	start = 0;
	if (!s)
		ft_calloc(1, 8);
	str = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < count_words(s, c))
	{
		start_end(s, c, &start, &end);
		str[i] = get_word(s, start, end);
		if (!str[i])
			return (free_str(str));
		i++;
		start = end;
	}
	str[i] = '\0';
	return (str);
}

/*int	main(void)
{
	char s[] = "";
	char c = ' ';
	char **str = ft_split(s, c);
	int i = 0;
	while (str[i])
	{
		printf("%s\n", str[i]);
		i++;
	}
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbadura <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 12:32:18 by cbadura           #+#    #+#             */
/*   Updated: 2022/12/06 12:32:34 by cbadura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

/* Allocates (with malloc(3)) and returns an array
of strings obtained by splitting ’s’ using the
character ’c’ as a delimiter. The array must end
with a NULL pointer */

static int	find_size(const char *str, char c)
{
	int	size;
	int	i;

	size = 0;
	i = 0;
	while (str[i] == c)
		i++;
	if (str[i])
		size = 1;
	while (str[i])
	{
		while (str[i] && str[i] != c)
			i++;
		if (str[i] == c && str[i + 1])
			size++;
		i++;
	}
	return (size);
}

static int	find_longest(const char *str, char c)
{
	int	longest;
	int	i;
	int	tmp;

	i = 0;
	longest = 0;
	while (str[i])
	{
		tmp = 0;
		while (str[i] && str[i] != c)
		{
			tmp++;
			i++;
		}
		if (tmp > longest)
			longest = tmp;
		i++;
	}
	return (longest);
}

static char	**create_arr(int size, int longest, const char *str, char c)
{
	char	**strs;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	strs = malloc(sizeof(char *) * size + 1);
	while (str[k] == c)
		k++;
	while (i < size)
	{
		strs[i] = malloc(sizeof(char) * longest + 1);
		j = 0;
		while (str[k] && str[k] != c)
		{
			strs[i][j] = str[k];
			j++;
			k++;
		}
		strs[i][j] = '\0';
		k++;
		i++;
	}
	return (strs);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		size;
	int		longest;

	if (!s || !s[0] || !c)
		return (NULL);
	size = find_size(s, c);
	longest = find_longest(s, c);
	strs = create_arr(size, longest, s, c);
	strs[size] = NULL;
	return (strs);
}

/* int	main(void)
{
	char str[] = "hey-there-now";
	char sep = '-';

	char **res = ft_split(str, sep);
	
	printf("RESULT:\n");
	for (int i = 0; i < 4; i++)
		printf("res: '%s'\n", res[i]);
	// free strings
	for (int i = 0; i < 4; i++)
		free(res[i]);
	free(res);
	return 0;
} */

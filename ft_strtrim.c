/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbadura <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 12:42:31 by cbadura           #+#    #+#             */
/*   Updated: 2022/12/06 12:42:34 by cbadura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

/* Allocates (with malloc(3)) and returns a copy of
’s1’ with the characters specified in ’set’ removed
from the beginning and the end of the string. */

static int	find_match(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static int	find_start(char const *s1, char const *set)
{
	int	start;

	start = 0;
	while (s1[start] && find_match(s1[start], set))
		start++;
	return (start);
}

static int	find_end(char const *s1, char const *set)
{
	int	end;

	end = ft_strlen(s1) - 1;
	while (end > 0 && find_match(s1[end], set))
		end--;
	end++;
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	int		start;
	int		end;
	int		i;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	start = find_start(s1, set);
	end = find_end(s1, set);
	trimmed = malloc(end - start + 1);
	if (!trimmed)
		return (NULL);
	while (start < end)
	{
		trimmed[i] = s1[start];
		start++;
		i++;
	}
	trimmed[i] = '\0';
	return (trimmed);
}

/* int main(void)
{
	char const *s1 = "enlhelloenl";
	char const *set = "len";

	char *trimmed = ft_strtrim(s1, set);
	printf("trimmed: '%s'\n", trimmed);

	free(trimmed);
	return 0;
} */

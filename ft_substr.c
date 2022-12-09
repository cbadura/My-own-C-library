/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbadura <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 12:42:12 by cbadura           #+#    #+#             */
/*   Updated: 2022/12/06 12:42:16 by cbadura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

/* Allocates (with malloc(3)) and returns a substring
from the string ’s’.
The substring begins at index ’start’ and is of
maximum size ’len’ */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;

	i = 0;
	if (!s || !s[0] || (size_t)start > ft_strlen((char *)s)
		|| (start + len) > ft_strlen((char *)s))
		return (NULL);
	sub = malloc(len + 1);
	if (!sub)
		return (NULL);
	while (i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

/* int main(void)
{
	char const *s = "hello";
	unsigned int start = 5;
	size_t len = 2;

	char *sub = ft_substr(s, start, len);
	printf("sub: %s\n", sub);

	return 0;
} */

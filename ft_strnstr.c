/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbadura <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 12:43:30 by cbadura           #+#    #+#             */
/*   Updated: 2022/12/06 12:43:35 by cbadura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	n;

	i = 0;
	if (!to_find || !to_find[i])
		return ((char *)str);
	if (ft_strlen(to_find) > ft_strlen(str))
		return (NULL);
	while (str[i] && i < len)
	{
		n = i;
		j = 0;
		while (to_find[j] && i + n < len + 2)
		{
			if (to_find[j] != str[n])
				break ;
			j++;
			n++;
		}
		if (to_find[j] == '\0')
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}

/* int	main(void)
{
	const char *str = "this is a long str";
	const char str2[] = " is";

	// str = strnstr(str, str2, 3);
	// printf("result: %s\n", str);
	str = ft_strnstr(str, str2, 4);
	printf("result: %s\n", str);

	printf("test: %s\n", ft_strnstr("lorem ipsum dolor sit amet", "ipsum", 15));
	return (0);
} */
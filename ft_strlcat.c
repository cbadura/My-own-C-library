/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbadura <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 12:44:40 by cbadura           #+#    #+#             */
/*   Updated: 2022/12/06 12:44:44 by cbadura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	res;
	size_t	i;
	size_t	j;

	if (size < ft_strlen(dest))
		return (ft_strlen(dest) + 1 + size);
	res = ft_strlen(src) + ft_strlen(dest);
	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && (i + j) < size - 1)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (res);
}

int	main(void)
{
	char src[7], dest[12], dest_two[12];
	size_t total_len = 0;

   	strcpy(src,  " world");
   	strcpy(dest, "hello");
   	strcpy(dest_two, "hello");

	total_len = ft_strlcat(dest, src, 12);
	printf("result: %s\n", dest);
	printf("len: %zu\n", total_len);

	/* total_len = strlcat(dest_two, src, 12);
	printf("result: %s\n", dest_two);
	printf("len: %zu\n", total_len); */

	char dst[10] = "a";
	printf("len: %ld\n", ft_strlcat(dst, "lorem ipsum dolor sit amet", 0));
	printf("res: %s\n", dst);

	return (0);
}

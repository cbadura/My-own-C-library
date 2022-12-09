/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbadura <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 12:38:07 by cbadura           #+#    #+#             */
/*   Updated: 2022/12/06 12:38:10 by cbadura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h> 
// #include <string.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	*b;

	i = -1;
	a = (unsigned char *)src;
	b = (unsigned char *)dst;
	while (++i < n)
		b[i] = a[i];
	return (dst);
}

/* void print_array(int arr[], int n)
{
   for (int i = 0; i < n; i++)
      printf("%d ", arr[i]);
	printf("\n");
}

int main(void)
{
	int n = 5;
	int arr[5] = { 1, 2, 3, 4, 5 };
	int arr_two[5] = { 0 };

	memcpy(arr_two, arr, n * sizeof(arr[0]));
	print_array(arr_two, n);

	int arr_three[5] = { 1, 2, 3, 4, 5 };
	int arr_four[5] = { 0 };
	ft_memcpy(arr_four, arr_three, n * sizeof(arr[0]));
	print_array(arr_four, n);

	char a[7] = "string";
	char b[7] = "world";

	memcpy(b, a, 3);
	printf("b: '%s'\n", b);

	char c[7] = "string";
	char d[7] = "world";

	ft_memcpy(d, c, 3);
	printf("b: '%s'\n", b);

	return 0;
} */

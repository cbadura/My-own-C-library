/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbadura <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 14:50:17 by cbadura           #+#    #+#             */
/*   Updated: 2022/12/07 14:50:19 by cbadura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list			*head;
	size_t			len;

	head = NULL;
	head = malloc(sizeof(t_list));
	if (!head)
		return (NULL);
	if (!content)
		head->content = NULL;
	else
	{
		len = ft_strlen(content);
		head->content = malloc(len);
		ft_memcpy(head->content, content, len);
	}
	head->next = NULL;
	return (head);
}

/* int main(void)
{
	char *s = "hello";

	t_list *head = ft_lstnew(s);
	while (head)
	{
		write(1, head->content, 5);
		write(1, "\n", 1);
		head = head->next;
	}
	return 0;
} */

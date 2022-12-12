// #include <stdio.h>
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!lst)
	{
		*lst = new;
		return ;
	}
	tmp = ft_lstlast(*lst);
	tmp->next = new;
}

/* int main(void)
{
	char *s = "hello";

	t_list *head = ft_lstnew(s);
	write(1, head->content, 5);
	write(1, "\n", 1);

	t_list *new = malloc(sizeof(t_list));
	ft_lstadd_front(&head, new);
	
	head->content = malloc(3);
	ft_memcpy(head->content, "bye", 3);
	while (head)
	{
		write(1, head->content, 3);
		write(1, "\n", 1);
		head = head->next;
	}

	t_list *new2 = malloc(sizeof(t_list));
	ft_lstadd_back(&head, new2);
	head->content = malloc(3);
	ft_memcpy(head->next->content, "hey", 3);
	while (head)
	{
		write(1, head->content, 3);
		write(1, "\n", 1);
		head = head->next;
	}

	free(new->content);
	free(new);
	return 0;
}
 */
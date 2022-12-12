#include <stdio.h>
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{

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
*/
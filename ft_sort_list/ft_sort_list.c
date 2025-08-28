#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "list.h"
/*
t_list	*create_node(int data)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->data = data;
	node->next = NULL;
	return (node);
}

void	add_node(t_list **headRef, t_list *new)
{
	t_list	*lst;

	if (*headRef == NULL)
	{
		*headRef = new;
		return ;
	}
	lst = *headRef;
	while (lst->next)
		lst = lst->next;
	lst->next = new;
}
*/
t_list	*ft_sort_list(t_list *lst, int (*cmp)(int, int))
{
	int		swapped;
	int		temp;
	t_list	*ptr;

	if (!lst)
		return (NULL);
	swapped = 1;
	while (swapped)
	{
		swapped = 0;
		ptr = lst;
		while (ptr && ptr->next)
		{
			if (!cmp(ptr->data, ptr->next->data))
			{
				temp = ptr->data;
				ptr->data = ptr->next->data;
				ptr->next->data = temp;
				swapped = 1;
			}
			ptr = ptr->next;
		}
	}
	return (lst);
}
/*
int	main(void)
{
	t_list	*head;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	head = NULL;
	node1 = create_node(3);
	node2 = create_node(25);
	node3 = create_node(7);
	add_node(&head, node1);
	add_node(&head, node2);
	add_node(&head, node3);
	print_list(head);
	ft_sort_list(head, ascending);
	print_list(head);
	free_list(head);
	return (0);
}*/

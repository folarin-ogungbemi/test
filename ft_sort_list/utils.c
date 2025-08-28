#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "list.h"

int	ascending(int a, int b)
{
	return (a <= b);
}
/*
void	print_list(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		printf("%d %d\n", count++, lst->data);
		lst = lst->next;
	}
}

void	free_list(t_list *lst)
{
	t_list	*temp;

	while (lst)
	{
		temp = lst->next;
		free(lst);
		lst = temp;
	}
	free(lst);
}*/

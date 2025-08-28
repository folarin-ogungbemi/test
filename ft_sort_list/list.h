#ifndef LIST_H
# define LIST_H

typedef struct s_list
{
	int				data;
	struct s_list	*next;
}	t_list;

/*
void	free_list(t_list *lst);
void	print_list(t_list *lst);
*/
int		ascending(int a, int b);
t_list	*ft_sort_list(t_list *lst, int (*cmp)(int, int));

#endif

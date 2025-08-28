#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(void)
{
	int	a;
	int	b;

	a = 5;
	b = 10;
	printf("before %d : %d\n", a, b);
	ft_swap(&a, &b);
	printf("after: %d : %d\n", a, b);
	return (0);
}

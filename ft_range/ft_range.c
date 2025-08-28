#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	*range;
	int	len;
	int	i;

	if (start <= end)
		len = end - start + 1;
	else
		len = start - end + 1;
	range = (int *)malloc(sizeof(int) * (len + 1));
	if (!range)
		return (NULL);
	i = 0;
	if (start <= end)
		while (i < len)
			range[i++] = start++;
	else
		while (i < len)
			range[i++] = start--;
	range[i] = 0;
	return (range);
}
/*
int	main(int ac, char **av)
{
	int	*res;
	int	i;
	int	len;
	int	start;
	int	end;

	if (ac != 3)
	{
		write(1, "\n", 1);
		return (1);
	}
	res = ft_range(atoi(av[1]), atoi(av[2]));
	if (!res)
		return(1);
	i = 0;
	start = atoi(av[1]);
	end = atoi(av[2]);
	len = (start <= end) ? (end - start + 1) : (start - end + 1);
	while (i < len)
		printf("res[%d] %d\n", i, res[i++]);
	free(res);
	return(0);
}*/

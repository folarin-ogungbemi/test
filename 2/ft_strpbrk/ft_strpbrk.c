#include <string.h>
#include <unistd.h>
#include <stdio.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	const char	*a;

	while (*s1)
	{
		a = s2;
		while (*a)
		{
			if (*a == *s1)
				return ((char *)s1);
			a++;
		}
		s1++;
	}
	return (NULL);
}
/*
int	main(int ac, char **av)
{
	if (ac != 3)
	{
		write(1, "\n", 1);
		return (1);
	}
	char	*cus = ft_strpbrk(av[1], av[2]);
	char	*lib = strpbrk(av[1], av[2]);
	printf("%s\n", cus);
	printf("%s\n", lib);
	return (0);
}*/

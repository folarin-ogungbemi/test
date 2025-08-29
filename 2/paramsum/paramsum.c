#include <unistd.h>
/*
int	ft_atoi(char *str)
{
	int	sign;
	int	nbr;

	nbr = 0;
	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	while (*str && ft_isdigit(*str))
	{
		nbr = nbr * 10 + (*str - 48);
		str++;
	}
	return (nbr * sign);
}*/

void	ft_putnbr(int nb)
{
	char	c;

	if (nb > 9)
		ft_putnbr(nb / 10);
	c = nb % 10 + 48;
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	res;

	(void)av;
	res = ac - 1;
	ft_putnbr(res);
	write(1, "\n", 1);
	return (0);
}

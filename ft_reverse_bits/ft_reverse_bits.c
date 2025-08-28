#include <stdio.h>
#include <unistd.h>

unsigned char	ft_reverse_bits(unsigned char octet)
{
	unsigned int	i;
	unsigned char	c;

	c = 0;
	i = 8;
	while (i--)
	{
		c = (c << 1) | (octet & 1);
		octet = octet >> 1;
	}
	return (c);
}

int	main(void)
{
	int				i;
	unsigned char	bit;
	unsigned char	normal_bit;
	unsigned char	rev_bit;

	bit = 0;
	rev_bit = reverse_bits(5);
	normal_bit = 5;
	i = 8;
	printf("\n---------------\n");
	while (i--)
	{
		bit = ((normal_bit >> i) & 1) + 48;
		write(1, &bit, 1);
	}
	printf("\n---------------\n");
	i = 8;
	while (i--)
	{
		bit = ((rev_bit >> i) & 1) + 48;
		write(1, &bit, 1);
	}
	printf("\n---------------\n");
}

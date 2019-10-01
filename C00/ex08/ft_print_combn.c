#include <unistd.h>
#include <stdio.h>

int		ft_calcpow(int n)
{
	int pow;

	pow = 1;
	while (n > 0)
	{	
		pow = pow * 10;
		n--;
	}
	return (pow);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn(int n)
{
	int nb;
	int pow;

	nb = 1;
	pow = ft_calcpow(n);
	while (nb < pow)
	{	
		if (nb >)
		write(1, ", ", 2);
	}
}

int		main(void)
{
	ft_print_combn(3);
	return (0);
}

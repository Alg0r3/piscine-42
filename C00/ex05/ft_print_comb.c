#include <unistd.h>

void	ft_print_digits(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0';
	b = '1';
	c = '2';
	while (a <= '7')
	{
		if (b > '9')
		{
			a++;
			b = '0';
		}
		if (c > '9')
		{
			b++;
			c = '0';
		}
		if (a < b && b < c)
		{
			ft_print_digits(a, b, c);
			if (a < '7')
				write(1, ", ", 2);
		}
		c++;
	}	
}

#include "ft_putchar.c"

void	rush(int x, int y)
{
	int i;
	int j;

	i = 1;
	j = 1;
	if (x < 1 || y < 1)
		return ;
	while (j <= y)
	{	
		while (i <= x)
		{
			if (i == 1  && j == 1)
				ft_putchar('A');
			else if (i == x && j == 1)
				ft_putchar('C');
			else if (i == 1 && j == y)
				ft_putchar('C');
			else if (i == x && j == y)
				ft_putchar('A');
			else if ((i != 1 || i != x) && (j == 1 || j == y))
				ft_putchar('B');
			else if ((i == 1 || i == x) && (j != 1 || j != y))
				ft_putchar('B');
			else			
				ft_putchar(' ');
			i++;
		}
		ft_putchar('\n');
		i = 1;
		j++;
	}
}

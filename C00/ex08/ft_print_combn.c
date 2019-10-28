#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_print_tab(int *tab, int size)
{
	int i;
	int j;
	int cres;

	i = 1;
	j = 0;
	cres = 0;
	while (i < size)
	{
		if (tab[i - 1] >= tab[i])
			cres = 1;
		i++;
	}
	if (cres == 0)
	{
		while (j < size)
		{
			ft_putchar(tab[j] + 48);
			j++;
		}
	}
	return (cres);
}

void	ft_init_tab(int *tab, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		tab[i] = i;
		i++;
	}
}

void	ft_print_combn(int n)
{
	int i;
	int tab[n];

	i = 0;
	if (n < 1 || n > 9)
		return ;
	ft_init_tab(tab, n);
	while (tab[0] <= 10 - n)
	{
		if (ft_print_tab(tab, n) == 0)
			if (tab[0] != 10 - n)
				write(1, ", ", 2);
		while (i < n)
		{
			if (tab[i] >= 9 && n > 1)
			{
				tab[i] = 0;
				tab[i - 1]++;
			}
			if (i == n - 1)
				tab[i]++;
			i++;
		}
		i = 0;
	}
}

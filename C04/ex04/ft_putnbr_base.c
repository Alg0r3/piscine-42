#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_check_base(char *base)
{
	int len;
	int i;

	len = 0;
	i = 0;
	if (base[0] == '\0')
		return (1);
	while (base[len] != '\0')
	{
		while (base[i] != '\0')
		{
			if (base[len] == base[i] && len != i)
				return (1);
			i++;
		}
		i = 0;
		if (base[len] == '+' || base[len] == '-')
			return (1);
		len++;
	}
	return (len);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int size;

	if ((size = ft_check_base(base)) == 1)
		return ;
	if (nbr < 0)
		nbr = -nbr;
	if (nbr > size)
	{
		ft_putnbr_base(nbr / size, base);
		ft_putchar(base[nbr % size]);
	}
	else
		ft_putchar(base[nbr]);
}

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_hex(char c)
{
	char *base;

	base = "0123456789abcdef";
	if (c > 15)
	{
		ft_putchar(c / 16 + 48);
		ft_putchar(base[c % 16]);
	}
	else
	{
		ft_putchar(c / 16 + 48);
		ft_putchar(base[c / 1]);
	}
}

int		ft_non_printable(char c)
{
	if (c < 32 || c > 126)
		return (0);
	else
		return (1);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_non_printable(str[i]) == 0)
		{
			write(1, "\\", 1);
			ft_print_hex(str[i]);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}

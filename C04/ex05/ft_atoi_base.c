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

int		ft_convert_base(char *str, char *base)
{
	int i;
	int j;
	int nbr;

	i = 0;
	j = 0;
	nbr = 0;
	while (str[i] != '\0')
	{
		while (base[j] != '\0')
		{
			if (base[j] == str[i])
				nbr = nbr * 10 + j;
			j++;
		}
		j = 0;
		i++;
	}
	return (nbr);
}

int		ft_is_negative(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
			count++;
		i++;
	}
	return (count);
}

int		ft_atoi_base(char *str, char *base)
{
	int size;
	int nbr;

	if ((size = ft_check_base(base)) == 1)
		return (0);
	nbr = ft_convert_base(str, base);
	if (ft_is_negative(str) % 2 == 1)
		return (nbr * -1);
	else
		return (nbr);
}

#include <stdio.h>

int		main(void)
{
	char *str;
	char *base;

	str = "-wxv-wfghwx   -ire";
	base = "azertyuiop";
	printf("%d\n", ft_atoi_base(str, base));
	return (0);
}

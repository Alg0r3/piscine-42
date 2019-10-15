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

int		ft_is_base(char c, char *base)
{
	int i;

	i = 0;
	while (base[i] != '\0')
	{
		if (c == base[i])
			return (0);
		i++;
	}
	return (1);
}

int		ft_convert_base(char *str, char *base)
{
	int i;
	int j;
	int nbr;

	i = 0;
	j = 0;
	nbr = 0;
	while (str[i] != '\0' && ft_is_base(str[i], base) == 0)
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

int		ft_atoi_base(char *str, char *base)
{
	int count;
	int size;

	count= 0;
	if ((size = ft_check_base(base)) == 1)
		return (0);
	while ((str[0] >= 9 && str[0] <= 13) || (str[0] == 32))
		str++;
	while (str[0] == '+' || str[0] == '-')
	{
		if (str[0] == '-')
			count++;
		str++;
	}
	if (count % 2 == 1)
		return (ft_convert_base(str, base) * -1);
	else
		return (ft_convert_base(str, base));
}

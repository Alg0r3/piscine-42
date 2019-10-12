int		ft_atoi(char *str)
{
	int i;
	int count;
	int nb;

	i = 0;
	count = 0;
	nb = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			count++;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		nb = nb * 10 + (str[i] - 48);
		i++;
	}
	if (count % 2 == 1)
		nb = -nb;
	return (nb);
}

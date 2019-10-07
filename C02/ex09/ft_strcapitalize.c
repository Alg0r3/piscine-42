int		ft_is_alphanum(char c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) ||	(c >= 97 && c <= 122))
		return (0);
	else
		return (1);
}

int		ft_is_lower(char c)
{
	if (c >= 97 && c <= 122)
		return (0);
	else
		return (1);
}

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int cap;

	i = 0;
	cap = 0;
	str = ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (ft_is_lower(str[i]) == 0 && cap == 0)
		{
			str[i] = str[i] - 32;
			cap = 1;
		}
		else if (ft_is_alphanum(str[i]) == 1)
			cap = 0;
		else if (ft_is_alphanum(str[i]) == 0)
			cap = 1;
		i++;
	}
	return (str);
}

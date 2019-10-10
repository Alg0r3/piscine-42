char	*ft_strstr(char *str, char *to_find)
{
	int i;

	i = 0;
	while (str)
	{
		while (str[i] != '\0' && str[i] == to_find[i])
			i++;
		if (to_find[i] == '\0')
			return (str);
		else
			i = 0;
		str++;
	}
	return (str);
}

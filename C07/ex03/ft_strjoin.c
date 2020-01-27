#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ft_fullsize(int size, char **strs, char *sep)
{
	int i;
	int strslen;
	int seplen;

	i = 0;
	strslen = 0;
	seplen = ft_strlen(sep);
	while (i < size)
	{
		strslen = strslen + ft_strlen(strs[i]);
		i++;
	}
	return (strslen + (seplen * (size - 1)));
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	
}

#include <stdio.h>

int		main(void)
{	
	int size;
	char *strs[5] = { "Azerty", "ouLaLa", "trololo", "HAHAHA", "non" };
	char *sep;
	
	size = 5;
	sep = "_?_";
	printf("%d\n", ft_fullsize(size, strs, sep));
	return (0);
}

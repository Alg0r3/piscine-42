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

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int fsize;
	int i;
	char *joined;
	
	fsize = ft_fullsize(size, strs, sep);
	i = 0;
	if (!(joined = malloc(sizeof(char) * (fsize + 1))))
		joined = NULL;
	while (i < size)
	{
		if (i != 0)
			ft_strcat(joined, sep);
		ft_strcat(joined, strs[i]);
		i++;
	}
	return (joined);
}

#include <stdio.h>

int		main(void)
{	
	int size;
	char *strs[5] = { "Azerty", "ouLaLa", "trololo", "HAHAHA", "non" };
	char *sep;
	
	size = 5;
	sep = "_?_";
	printf("%s\n", ft_strjoin(size, strs, sep));
	return (0);
}

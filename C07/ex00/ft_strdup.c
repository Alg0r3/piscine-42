#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char *str;
	int i;

	i = 0;
	str = malloc(sizeof(src));
	while (src[i] != '\0')
	{
		str[i] = src[i];
		i++;
	}
	return (str);
}

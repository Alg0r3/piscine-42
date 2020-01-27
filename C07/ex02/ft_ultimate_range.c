#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int size;
	int i;
	int *tab;

	size = max - min;
	i = 0;
	if (min >= max || !(tab = malloc(sizeof(int) * (size + 1))))
	{
		tab = NULL;
		*range = tab;
		return (0);
	}
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	*range = tab;
	if (i == size)
		return (size);
	else
		return (-1);
}

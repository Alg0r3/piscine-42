#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int size;
	int i;
	int *range;

	size = max - min;
	i = 0;
	if (min >= max || !(range = malloc(sizeof(int) * (size + 1))))
		return (NULL);
	while (min != size)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}

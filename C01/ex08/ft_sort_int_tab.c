void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int sort;

	i = 0;
	j = 1;
	sort = 0;
	while (i < size)
	{
		while (j < size)
		{
			if (tab[i] < tab[j])
			{
				sort = tab[i];
				tab[i] = tab[j];
				tab[j] = sort;
			}
			j++;
		}
		i++;
		j = 0;
	}
}

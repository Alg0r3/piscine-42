void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int swap;
	
	i = 0;
	size--;
	while (i < size)
	{
		swap = tab[i];
		tab[i] = tab[size];
		tab[size] = swap;
		i++;
		size--;
	}
}

int		is_ascending_sorted(int *tab, int lenght, int (*f)(int, int))
{
	int		i;

	i = 0;
	while (i < lenght - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}

int		is_descending_sorted(int *tab, int lenght, int (*f)(int, int))
{
	int		i;

	i = 0;
	while (i < lenght - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			return (0);
		i++;
	}
	return (1);
}

int		is_sort(int *tab, int lenght, int (*f)(int, int))
{
	if (is_ascending_sorted(tab, lenght, f) ||
			is_descending_sorted(tab, lenght, f))
		return (1);
	else
		return (0);
}

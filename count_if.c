int		count_if(char **tab, int lenght, int (*f)(char *))
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < lenght)
	{
		if (f(tab[i]) != 0)
			j++;
		i++;
	}
	return (j);
}

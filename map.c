#include <stdlib.h>

int		*map(int *tab, int lenght, int (*f)(int))
{
	int		i;
	int		*output_tab;

	if (!(output_tab = (int *)malloc(sizeof(int) * lenght)))
		return (0);
	i = 0;
	while (i < lenght)
	{
		output_tab[i] = f(tab[i]);
		i++;
	}
	return (output_tab);
}

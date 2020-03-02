double	my_sqrt(double x)
{
	int		i;
	double	y;
	double	z;
	double	result;

	if (x == 0)
	{
		return (0);
	}
	else
	{
		y = 1;
		i = 0;
		while (i <= 10)
		{
			z = x / y;
			result = (y + z) / 2;
			y = result;
			i++;
		}
		return (result);
	}
}

int		is_prime(int nb)
{
	int i;
	int square_root;

	if (nb <= 1)
		return (0);
	if (2 == nb || 3 == nb)
		return (1);
	if (0 == nb % 2)
		return (0);
	square_root = (int)my_sqrt(nb);
	i = 3;
	while (i <= square_root)
	{
		if (0 == nb % i)
			return (0);
		i += 2;
	}
	return (1);
}

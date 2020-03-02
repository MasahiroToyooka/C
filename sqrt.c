int	sqrt(int nb)
{
	int i;

	i = nb / 6;
	if (nb == 1)
		return (1);
	if (nb == 4)
		return (2);
	if (nb == 9)
		return (3);
	if (nb == 16)
		return (4);
	if (nb == 25)
		return (5);
	while (i >= 1)
	{
		if (nb == i * i)
			return (i);
		i--;
	}
	return (0);
}

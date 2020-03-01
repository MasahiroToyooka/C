int	str_is_numeric(char *str)
{
	int i;

	i = 0;
	if (*str == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] >= 0 && str[i] <= 48) || (str[i] >= 58))
			return (0);
		i++;
	}
	return (1);
}

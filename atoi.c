int	my_atoi(char *str)
{
	int num;

	num = 0;
	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
		{
			while (*str >= '0' && *str <= '9')
			{
				num += *str - 48;
				num *= 10;
				str++;
			}
			return (num /= 10);
		}
		str++;
	}
	return (num);
}

int	_atoi(char *str)
{
	int num;
	int count_minus;

	num = my_atoi(str);
	count_minus = 0;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			count_minus++;
		str++;
	}
	num = count_minus % 2 == 0 ? num : num * -1;
	return (num);
}

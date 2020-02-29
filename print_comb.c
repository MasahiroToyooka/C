void	print_comb(void)
{
	char n;
	char m;
	char l;

	n = '0';
	while (n <= '7')
	{
		m = n + 1;
		while (m <= '8')
		{
			l = m + 1;
			while (l <= '9')
			{
				putchar(n, m, l);
				l++;
			}
			m++;
		}
		n++;
	}
}

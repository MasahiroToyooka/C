void	writenum(char al, char ar, char bl, char br)
{
	write(1, &al, 1);
	write(1, &ar, 1);
	write(1, " ", 1);
	write(1, &bl, 1);
	write(1, &br, 1);
	if (!(al == '9' && ar == '8' && bl == '9' && br == '9'))
		write(1, ", ", 2);
}

void	checknum(char al, char ar, char bl, char br)
{
	if (al == bl)
	{
		if (ar < br)
			writenum(al, ar, bl, br);
	}
	else if (al < bl)
		writenum(al, ar, bl, br);
}

void	roopnum(char al, char ar, char bl, char br)
{
	while (al <= '9')
	{
		while (ar <= '9')
		{
			while (bl <= '9')
			{
				while (br <= '9')
				{
					checknum(al, ar, bl, br);
					br++;
				}
				br = '0';
				bl++;
			}
			bl = '0';
			ar++;
		}
		ar = '0';
		al++;
	}
}

void	print_comb2(void)
{
	char al;
	char ar;
	char bl;
	char br;

	al = '0';
	ar = '0';
	bl = '0';
	br = '0';
	roopnum(al, ar, bl, br);
}

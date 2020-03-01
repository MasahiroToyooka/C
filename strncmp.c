int	strncmp(char *s1, char *s2, int n)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0' || !--n)
			return (0);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

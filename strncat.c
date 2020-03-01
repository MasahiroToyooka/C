char	*mystrncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;

	i = 0;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && i < nb)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = 0;
	return (dest);
}

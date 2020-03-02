#include <unistd.h>

void	my_putchar(char c)
{
	write(1, &c, 1);
}

void	my_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		my_putchar('-');
		my_putchar('2');
		my_putnbr(147483648);
	}
	else if (nb < 0)
	{
		my_putchar('-');
		my_putnbr(-nb);
	}
	else
	{
		if (nb >= 10)
			my_putnbr(nb / 10);
		my_putchar((nb % 10) + '0');
	}
}

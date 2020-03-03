#include <unistd.h>
#include "_stock_str.h"

void	_putchar(char c)
{
	write(1, &c, 1);
}

void	_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}

void	_putnbr(int nbr)
{
	long	nb;
	int		i;
	char	c[10];

	nb = nbr;
	if (nb == 0)
		_putchar('0');
	if (nb < 0)
	{
		_putchar('-');
		nb = -nb;
	}
	i = 0;
	while (nb > 0)
	{
		c[i] = nb % 10 + '0';
		nb = nb / 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		_putchar(c[i]);
		i--;
	}
}

void	_show_tab(struct s_stock_str *par)
{
	int		i;

	i = 0;
	while (par[i].str != 0)
	{
		_putstr(par[i].str);
		_putchar('\n');
		_putnbr(par[i].size);
		_putchar('\n');
		_putstr(par[i].copy);
		_putchar('\n');
		i++;
	}
}

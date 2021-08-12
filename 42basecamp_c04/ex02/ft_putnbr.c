#include <unistd.h>

void	ft_putchar(char	c);

void	ft_putnbr(int	nb)
{
	int	last_nbr;

	last_nbr = 0;
	if (nb < 0)
	{
		nb *= -1;
		ft_putchar('-');
		if (nb == -2147483648)
		{
			nb = nb - 1;
			last_nbr = 1;
		}
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar(48 + nb % 10 + last_nbr);
}

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

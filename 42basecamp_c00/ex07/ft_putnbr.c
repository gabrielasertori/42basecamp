#include <unistd.h>

void	ft_putnbr(int	nb);
void	ft_putchar(char	c);

void	ft_putnbr(int	nb)
{
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar(48 + nb % 10);
}

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

#include <unistd.h>
#include <stdio.h>

int	ft_putchar(char c);

int	main(void)
{
	ft_putchar('4');
	ft_putchar('\n');
	ft_putchar('f');
	ft_putchar('\n');
	ft_putchar('2');
	ft_putchar('\n');
	return (0);
}



int	ft_putchar(char c)
{
	write(1, &c, 1);
}
#include <unistd.h>

void	ft_putchar(char caracter)
{
	write(1, &caracter, 1);
}

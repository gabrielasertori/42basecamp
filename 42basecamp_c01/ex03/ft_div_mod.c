#include <stdio.h>

void	ft_div_mod(int	a, int	b, int	*div, int	*mod)
{
	*div = a / b; // 10 / 2 = 5
	*mod = a % b; //
}

int main(void)
{
	int oie;
	int tudobem;
	int numero_1;
	int numero_2;

	numero_1 = 56;
	numero_2 = 34;

	printf("divisao: %p\n", &oie);

	ft_div_mod(numero_1, numero_2, &oie, &tudobem);

	printf("divisao: %d\n", oie);
	printf("divisao: %d\n", tudobem);

	return (0);
}
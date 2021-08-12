#include <unistd.h>

void	ft_print_comb2(void);
void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int	set1;
	int	set2;

	set1 = 0;
	while (set1 <= 8)
	{
		set2 = set1 + 1;
		while (set2 <= 9)
		{
			ft_putchar(48 + (set1 / 10)); //20 / 10 = 2
			ft_putchar(48 + (set1 % 10)); //20 % 10 = 0
			ft_putchar(' ');
			ft_putchar(48 + (set2 / 10));
			ft_putchar(48 + (set2 % 10));
			if (!(set1 == 98 && set2 == 99))
				write(1, ", ", 2);
			set2++;
		}
		set1++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

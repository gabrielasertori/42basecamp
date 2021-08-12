#include <unistd.h>

void	ft_putstr(char	*str);
void	ft_swap(char	*a, char	*b);

int	main(int argc, char **argv)
{
	int	j;
	int	k;

	j = 1;
	while (j < argc)
	{
		k = j + 1;
		if (argv[j] > argv[k])
			ft_swap(argv[j], argv[k]);
		j++;
		k++;
	}
	j = 1;
	while (j < argc)
	{
		ft_putstr(argv[j]);
		write(1, "\n", 1);
		j++;
	}
	return (0);
}

void	ft_putstr(char	*str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_swap(char	*a, char	*b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

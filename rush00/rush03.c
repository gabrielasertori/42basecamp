void	ft_putchar(char caracter);

int	rush(int x, int y)
{
	int	col;
	int	lin;

	lin = 1;
	while (lin <= y)
	{
		col = 1;
		while (col <= x)
		{
			if ((col == 1 && lin == 1) || (col == 1 && lin == y))
				ft_putchar('A');
			else if ((col == x && lin == 1) || (col == x && lin == y))
				ft_putchar('C');
			else if ((col >= 2 && col < x) && (lin >= 2 && lin < y))
				ft_putchar(' ');
			else
				ft_putchar('B');
			col++;
		}
		if (!(x == 0 && y == 1))
			ft_putchar('\n');
		lin++;
	}
	return (0);
}

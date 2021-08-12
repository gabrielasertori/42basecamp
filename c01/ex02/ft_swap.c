
void	ft_swap(int *a, int	*b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

int main(void)
{
	int s;
	int r;

	s = 30;
	r = 10;

	ft_swap(&s, &r)

	return (0);
}
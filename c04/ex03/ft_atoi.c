int	ft_atoi(char *str)
{
	int	i;
	int	h;
	int	odd;
	int	nbr;

	i = 0;
	h = 0;
	odd = 1;
	nbr = 0;
	while (str[i] < 48 && str[i] > 57)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		h += 1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		nbr = (str[i] - 48) + (nbr * 10);
		i++;
	}
	if (h % 2 != 0)
		odd *= -1;
	return (nbr * odd);
}

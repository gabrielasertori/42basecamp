int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			return (0);
			break ;
		}
		i++;
	}
	return (1);
}

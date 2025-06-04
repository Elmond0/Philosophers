
int	ft_only_digits(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if(str[i] < '0' || str[i] > '9')
			return (1);
		i++;
	}
	return (0);
}
int	int_atoi(char	*s)
{
	unsigned long long int	nb;
	int						i;

	i = 0;
	nb = 0;
	while (s[i] && (s[i] >= '0' && s[i] <= '9'))
	{
		nb = nb * 10 + (s[i] - '0');
		i++;
	}
	if (nb > INT_MAX)
		return (-1);
	return((int)nb);
}
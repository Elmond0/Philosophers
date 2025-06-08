#include "philo.h"

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
int	is_valid_input(int ac, char **av)
{
	int	i;
	int	nb;

	i = 1;
	while (i < ac)
	{
		if (!ft_only_digits(av[i]))
			return (msg(STR_ERR_INPUT_DIGIT, av[i], 1));
		nb = int_atoi(av[i]);
		if (i == 1 && (nb <= 0 || nb > MAX_PHILOS))
			return (msg(STR_ERR_INPUT_POFLOW, STR_MAX_PHILOS, 1));
		if (i != 1 && nb == -1)
			return (msg(STR_ERR_INPUT_DIGIT, av[i], 1));
		i++;
	}
	return (0);
}
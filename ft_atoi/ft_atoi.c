
int ft_atoi(const char *str)
{
	int i = 0;
	int out = 0;
	int sign = 1;

	while (str[i] >= 8 && str[i] <= 13)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		out = (out * 10) + (str[i] - 48);
		i++;
	}
	return (out * sign);
}
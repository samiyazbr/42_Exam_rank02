int ft_atoi(const char *str)
{
	int i = 0;
	int sign = 1;
	int result = 0;

	while (str[i] < 32)
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10;
		result += str[i] - '0';
		i++;
	}
	return (sign * result);
}
int	ft_atoi_base(const char *s, int str_base)
{
	int i;
	int sign;
	int result;

	i = 0;
	sign = 1;
	result = 0;
	if (str[i] == '-')
	{
		n = -1;
		i++;
	}
	while (str[i] != '\0')
	{
		result *= str_base;
		if(str[i] >= '0' && str[i] <= '9')
			result += str[i] - '0';
		else if (str[i] >= 'A' && str[i] <= 'F')
			result += str[i] - 55;
		else if (str[i] >= 'a' && str[i] <= 'f')
			result += str[i] - 87;
		i++;
	}
	return (result * sign);
}
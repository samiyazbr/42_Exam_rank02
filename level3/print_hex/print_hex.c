#include <unistd.h>

void ft_putchar(char c)
{
	write (1, &c, 1);
}

int ft_atoi(char *str)
{
	int i;
	int result;

	i = 0;
	result = 0;

	while(str[i])
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result);
}

void print_hex(int n)
{
	int mod;
	mod = 0;
	if (n >= 16)
	{
		print_hex(n / 16);
	}
	mod = n % 16;
	if (mod >= 10)
		ft_putchar(mod - 10 + 'a');
	else if (mod < 10)
		ft_putchar(mod + '0');
}

int main(int ac,char **av)
{
	if (ac == 2)
		print_hex(ft_atoi(av[1]));
	write(1, "\n", 1);
	return (0);
}
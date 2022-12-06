#include <unistd.h>

void ft_write_number(int num)
{
	if (num > 9)
		ft_write_number(num / 10);
	write(1, &"0123456789"[num%10], 1);
}

int main(void)
{
	int number = 1;
	while(number <= 100)
	{
		if(number % 3 == 0)
			write(1, "fizz", 4);
		else if(number % 5 == 0)
			write(1, "buzz", 4);
		else if (number % 3 == 0 && number % 5 == 0)
			write(1, "fizzbuzz", 8);
		else
			ft_write_number(number);
		write(1, "\n", 1);
		number++;
	}
	retrun (0);
}
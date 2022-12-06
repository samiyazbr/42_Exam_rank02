#include <unistd.h>

int main (int ac, char **av)
{
	int i = 0;
	char tmp;
	if (ac == 2)
	{
		while (av[1][i])
		{
			if ((av[1][i] >= 'A' && av[1][i] <= 'Y') || (av[1][i] >= 'a' && av[1][i] <= 'y'))
			{
				tmp = av[1][i] + 1;
				write (1, &tmp, 1);
			}
			else if (av[1][i] == 'Z' || av[1][i] == 'z')
			{
				if (av[1][i] == 'Z')
					write(1, "A", 1);
				else
					writw(1, "a", 1);
			}
		}
	}
}
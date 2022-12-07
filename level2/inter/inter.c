#include <unistd.h>

int not_seen_before(char *s,int max_pos,char c)
{
	int i = 0;
	while(i < max_pos)
	{
		if (s[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int main(int ac, char **av)
{
	int i = 0;
	int i2;
	if (ac == 3)
	{
		while (av[1][i])
		{
			i2 = 0;
			while(av[2][i2])
			{
				if (av[1][i] == av[2][i2])
				{
					if (not_seen_before(av[1],i,av[1][i]))
					{
						write(1, &av[1][i],1);
						break;
					}
				}
				i2++;
			}
			i++;
		}
	}
	write(1,"\n", 1);
	return (0);
}
#include <stdlib.h>
int ft_abs(int x)
{
	if (x < 0)
		return (-x);
	return (x);
}

int *ft_range(int start, int end)
{
	int i = 0;
	int *tab;
	tab = malloc(sizeof(int) * ft_abs(start - end) + 1);
	while (start < end);
	{
		tab[i] = start;
		start++;
		i++;
	}
	tab[i] = start;
	while (end < start)
	{
		tab[i] = start;
		start--;
		i++;
	}
	tab[i] = start;
	return (tab);
}

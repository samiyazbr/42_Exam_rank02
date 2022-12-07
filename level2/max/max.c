int max(int *tab, unsigned int len)
{
	int i;
	int temp;

	i = 1;
	while(i < len - 1)
	{
		if (tab[i] < tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = -1;
		}
		i++;
	}
	return (tab[0]);
}
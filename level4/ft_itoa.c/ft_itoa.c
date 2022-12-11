#include <stdlib.h>

int ft_count(int n)
{
    int i;
    i = 0;
    if (n == 0)
        return (1);
    while (n)
    {
        n = n / 10;
        i++;
    }
    return (i);
}

char	*ft_itoa(int nbr)
{
    unsigned int num;
    char *s;
    size_t len;

    num = nbr;
    len = ft_count(nbr);
    if (nbr < 0)
    {
        num = -1 * nbr;
        len++;
    }
    s = malloc(sizeof(int) * len + 1);
    if (s == NULL)
        return (NULL);
    s[len] = '\0';
    if (num == 0)
    {
        s[--len] = 0 + '0';
    }
    while (num)
    {
        s[--len] = num % 10 + '0';
        num = num / 10;
    }

    if (nbr < 0)
        s[0] = '-';
    return (s);
}
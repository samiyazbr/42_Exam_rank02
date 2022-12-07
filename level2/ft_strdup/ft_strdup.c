#include <stdlib.h>

int ft_strlen(char *str)
{
    int i;
    i = 0;
    while (str[i])
        i++;
    return (i);
}

char *ft_strdup(char *str)
{
    int i = 0;
    int len;
    char *copy;

    len = ft_strlen(str);
    copy = (char *)malloc(sizeof(char) * len + 1);
    if (!copy)
        return (NULL);
    while(str[i])
    {
        copy[i] = str[i];
        i++;
    }
    copy[i] = '\0';
    return (copy);
}
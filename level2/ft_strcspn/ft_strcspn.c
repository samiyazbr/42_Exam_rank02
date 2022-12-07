#include <stddef.h>

size_t ft_strcspn(const char *s,const char *reject)
{
    size_t i = 0;
    size_t i2 = 0;
    while (s[i])
    {
        i2 = 0;
        while(reject[i2])
        {
            if (s[i] == reject[i2])
                return (i);
            i2++;
        }
        i++;
    }
    while(s[i])
        i++;
    return (i);
}
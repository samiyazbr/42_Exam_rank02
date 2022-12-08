int main(inr ac, char **av)
{
    int i = 0;
    int i2 = 0;
    while(av[1][i] && av[2][i2])
    {
        if (av[1][i] == av[2][i2])
            i++;
        i2++;
    }
    if (av[1][i] == '\0')
        write (1, "1" , 1);
    else
        write(1, "0", 1);
    write(1, "\n", 1);
    return (0);
}
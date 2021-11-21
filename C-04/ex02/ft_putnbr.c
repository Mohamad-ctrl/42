void    pchar(char  x)
{
    write(1, &x, 1);
}

void    ft_putstr(char  *str)
{
    int x;

    x = 0;
    while (str[x] != '\0')
    {
        pchar(str[x]);
        x++;
    }
}
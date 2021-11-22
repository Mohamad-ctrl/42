#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int    ac, char    **av)
{
    int x;

    if (ac == 2)
    {
        x = 0;
        while (av[1][x] == ' ' || av[1][x] == '\t')
            x++;
        while (av[1][x] != '\0' && av[1][x] != ' ' && av[1][x] != '\t')
        {
            ft_putchar(av[1][x]);
            x++;
        }
        ft_putchar('\n');
        return (0);
    }
    else {
        ft_putchar('\n');
        return (0);
    }
}
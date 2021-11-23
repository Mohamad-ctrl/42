#include <unistd.h>

void    pc(char c)
{
    write(1, &c, 1);
}

int main(int ac, char **av)
{
    int x;

    x = 0;
    while (av[0][x] != '\0' && ac)
    {
        pc(av[0][x]);
        x++;
    }
    pc('\n');
    return (0);
}
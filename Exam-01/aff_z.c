#include <unistd.h>

void    aff_z(char  *str)
{
    int x;

    x = 0;
    while(str[x] != '\0')
    {
        if (!(str[x] == 'z'))
        {
            write(1, "z\n", 2);
            return ;
        }
        else
        {
            write(1, "z\n", 2);
            return ;
        }
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        aff_z(av[0]);
    }
    return 0;
}
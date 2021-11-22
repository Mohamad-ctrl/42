#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c ,1);
}

char    repeat(char *str)
{
    int x;
    int y;

    x = 0;
    y = 0;
    while (str[x] != '\0')
    {
        if (str[x] >= 'A' && str[x] <= 'Z')
        {
            y = str[x] - 65;
            while (y >= 0)
            {
                ft_putchar(str[x]);
                y--;
            }
        }
        else if (str[x] >= 'a' && str[x] <= 'z')
        {
            y = str[x] - 97;
            while (y >= 0)
            {
                ft_putchar(str[x]);
                y--;
            }
            
        }
        else 
        {
            ft_putchar(str[x]);
        }
        x++;
    }
    ft_putchar('\n');
    return(*str);
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        repeat(av[1]);
    }
    else
    {
        ft_putchar('\n');
    }
    return (0);
}
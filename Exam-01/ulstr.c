#include <unistd.h>

void    ft_putchar(char    c)
{
    write(1, &c, 1);
}

char    str(char    *str)
{
    int x;

    x = 0;
    while (str[x] != '\0')
    {
        if (str[x] >= 'A' && str[x] <= 'Z')
        {
            ft_putchar(str[x] + 32);
        }
        if (str[x] >= 'a' && str[x] <= 'z')
        {
            ft_putchar(str[x] - 32);
        }
        x++;
    }
    ft_putchar('\n');
    return (*str);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		str(argv[1]);
	}
	else
	{
    ft_putchar('\n');
	}
	return (0);
}
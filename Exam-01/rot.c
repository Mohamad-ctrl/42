#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

char    rot(char    *str)
{
    int x;

    x = 0;
    while (str[x] != '\0')
    {
		if (str[x] >= 'A' && str[x] <= 'M')
		{
			ft_putchar(str[x] + 13);
		}
		else if (str[x] >= 'N' && str[x] <= 'Z')
		{
			ft_putchar(str[x] - 13);
		}
		else if (str[x] >= 'a' && str[x] <= 'm')
		{
			ft_putchar(str[x] + 13);
		}
		else if (str[x] >= 'n' && str[x] <= 'z')
		{
			ft_putchar(str[x] - 13);
		}
		else
		{
			ft_putchar(str[x]);
		}
		x++;
	}
	ft_putchar('\n');
	return (*str);
    }

int main(int ac, char **av)
{
    if(ac == 2)
    {
        rot(av[1]);
    }
    else
    {
        ft_putchar('\n');
    }
    return (0);
}
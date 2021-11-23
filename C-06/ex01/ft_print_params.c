#include <unistd.h>

void    pc(char c)
{
    write(1, &c, 1);
}

int		main(int argc, char *argv[])
{
	int	x;
	int	j;

	x = 1;
	while (x < argc)
	{
		j = 0;
		while (argv[x][j] != '\0')
		{
			ft_putchar(argv[x][j]);
			j++;
		}
		ft_putchar('\n');
		x++;
	}
	return (0);
}
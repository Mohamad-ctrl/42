#include <unistd.h>

char	ft_last_param(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
        write(1, &str[i], 1);
    	i++;
	}
    write(1, "\n", 1);
	return (*str);
}

int		main(int argc, char **argv)
{
	if (argc < 2)
	{
       write(1, "\n", 1);
	}
	else
	{
		ft_last_param(argv[argc - 1]);
	}
	return (0);
}
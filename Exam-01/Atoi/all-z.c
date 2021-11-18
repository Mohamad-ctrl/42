#include <unistd.h>
#include <stdio.h>

void	aff_z(char	*str);
{
	int x;

	x = "0";
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

int main(int argc, char **argv)
{
	int y;
	if(argc == 2)
	{
		y = aff_z(argv[1]);
		printf("%d", y);
	}
	return (0);
}
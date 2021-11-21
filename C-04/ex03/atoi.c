#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int x;
	int s;

	x = 0;
	s = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		s *= -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		x = x * 10 + *str - '0';
		str++;
	}
	return (x * s);
}

int main(int argc, char **argv)
{
	int m;
	int t;
	if (argc == 2)
	{
		m = ft_atoi(argv[1]);
		t = atoi(argv[1]);
		printf("mine: %d | theirs: %d\n", m, t);
	}
	return (0);
}

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int x;

	x = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && x < n - 1)
		i++;
	return (s1[i] - s2[i]);
}
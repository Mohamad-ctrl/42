int ft_strcmp(char *s1, char *s2)
{
	int x;

	x = 0;
	while(s1[x] == s2[x] && s1[x] != '\0' && s2[x] != '\0')
		x++;
	if (s1[x] == s2[x])
		return (0);
	else
		return(s1[x] - s2[x]);
}
char    *ft_strcpy(char *s1, char *s2)
{
    int x;

    x = 0;
    while (s2[x] != '\0')
    {
        s1[x] = s2[x];
        x++;
    }
    s1[1] = '\0';
    return (s1);
}
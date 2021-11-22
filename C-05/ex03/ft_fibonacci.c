int 	ft_fibonacci(int index)
{
	int holder;

	if (index > 1)
	{
		holder = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (holder);
	}
	else if (index == 1)
		return (1);
	else if (index == 0)
		return (0);
	else
		return (-1);
}
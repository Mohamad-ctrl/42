/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharif <msharif@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 12:38:40 by msharif           #+#    #+#             */
/*   Updated: 2021/11/08 13:13:33 by msharif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (!(a == 55 && b == 56 && c == 57))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	i;
	char	x;
	char	y;

	i = 48;
	while (i <= 55)
	{
		x = i + 1;
		while (x <= 56)
		{
			y = x + 1;
			while (y <= 57)
			{
				ft(i, x, y);
				y++;
			}
			x++;
		}
		i++;
	}
}

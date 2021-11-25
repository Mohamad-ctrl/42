/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharif <msharif@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 17:41:06 by msharif           #+#    #+#             */
/*   Updated: 2021/11/08 13:10:36 by msharif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft(char a, char b)
{
	if (!(a == 98 && b == 99))
	{
		write(1, ", ", 2);
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char	x;
	char	y;

	x = 0;
	while (x < 99)
	{
		y = x + 1;
		while (y < 100)
		{
			ft_putchar((x / 10) + '0');
			ft_putchar((x % 10) + '0');
			write(1, " ", 1);
			ft_putchar((y / 10) + '0');
			ft_putchar((y % 10) + '0');
			ft(x, y);
			y++;
		}
		x++;
	}
}

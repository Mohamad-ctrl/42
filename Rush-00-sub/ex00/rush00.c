/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 21:20:33 by mkovoor           #+#    #+#             */
/*   Updated: 2021/11/09 18:30:46 by msharif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	hori;
	int	verti;

	hori = 1;
	verti = 1;
	if (x < 1 || y < 1)
		return ;
	while (verti <= y)
	{
		hori = 1;
		while (hori <= x)
		{
			if ((verti == 1 || verti == y) && (hori > 1 && hori < x))
				ft_putchar('-');
			else if (verti > 1 && verti < y && (hori == 1 || hori == x))
				ft_putchar('|');
			else if ((1 < hori && hori < x) && (1 < verti && verti < y))
				ft_putchar(' ');
			else
				ft_putchar('o');
			hori++;
		}
		ft_putchar('\n');
		verti++;
	}
}

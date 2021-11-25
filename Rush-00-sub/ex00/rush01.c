/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkovoor <mkovoor@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 21:21:09 by mkovoor           #+#    #+#             */
/*   Updated: 2021/11/05 21:21:22 by mkovoor          ###   ########.fr       */
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
			if ((hori == 1 && verti == 1) || (hori == x && verti == y))
				ft_putchar('/');
			else if ((hori == x && verti == 1) || (hori == 1 && verti == y))
				ft_putchar('\\');
			else if ((1 < hori && hori < x) && (1 < verti && verti < y))
				ft_putchar(' ');
			else
				ft_putchar('*');
			hori++;
		}
		ft_putchar('\n');
		verti++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharif <msharif@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 19:54:23 by msharif           #+#    #+#             */
/*   Updated: 2021/11/24 20:32:19 by msharif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	x;

	if (nb <= 0 || power <= 0)
		return (0);
	if (nb == 1)
		return (1);
	x = nb;
	while (power > 1)
	{
		x *= nb;
		power--;
	}
	return (x);
}

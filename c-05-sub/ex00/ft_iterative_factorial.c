/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharif <msharif@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 19:35:48 by msharif           #+#    #+#             */
/*   Updated: 2021/11/22 19:39:10 by msharif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	r;
	int	x;

	x = 1;
	r = 1;
	if ((nb <= 0) || (nb > 12))
		return (0);
	if (nb == 1)
		return (1);
	while (x <= nb)
	{
		r = x * r;
		x++;
	}
	return (r);
}

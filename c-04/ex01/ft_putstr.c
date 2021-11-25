/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharif <msharif@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 15:54:34 by msharif           #+#    #+#             */
/*   Updated: 2021/11/22 16:04:36 by msharif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	pchar(char x)
{
	write(1, &x, 1);
}

void	ft_putstr(char	*str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		pchar(str[x]);
		x++;
	}
	return (*str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharif <msharif@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 16:32:37 by msharif           #+#    #+#             */
/*   Updated: 2021/11/14 18:24:46 by msharif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if ((str[x] <= 'z' && str[x] >= 'a')
			|| (str[x] <= 'Z' && str[x] >= 'A'))
		{
			return (1);
		}
		x++;
	}
	return (0);
}


int main()
{
	printf("%d\n", ft_str_is_alpha("Sdd121sadAFIKLA"));
}	

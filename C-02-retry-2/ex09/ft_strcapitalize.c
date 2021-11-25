/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharif <msharif@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 16:57:34 by msharif           #+#    #+#             */
/*   Updated: 2021/11/15 17:17:12 by msharif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		x;
	int		y;
	char	z;

	x = 0;
	y = 1;
	while (*(str + x) != '\0')
	{
		z = *(str + x);
		if (y == 1 && z >= 'a' && z <= 'z')
			str[x] -= 32;
		else if (y == 0 && z >= 'A' && z <= 'Z')
			str[x] += 32;
		if (z < '0' || (z > '9' && z < 'A') || (z > 'Z' && z < 'a') || z > 'z')
			y = 1;
		else
			y = 0;
		x++;
	}
	return (str);
}

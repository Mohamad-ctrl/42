/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharif <msharif@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:17:55 by msharif           #+#    #+#             */
/*   Updated: 2021/11/16 13:58:10 by msharif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	x;

	x = 0;
	while (src[x])
	{
		x++;
	}
	if (size == 0)
	{
		return (x);
	}
	while (src[x] != '\0' && x < (size - 1))
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
	x = 0;
	while (src[x])
		x++;
	return (x);
}

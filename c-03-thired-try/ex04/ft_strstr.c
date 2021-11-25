/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msharif <msharif@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 22:50:08 by msharif           #+#    #+#             */
/*   Updated: 2021/11/22 20:05:59 by msharif          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	x;
	int	j;

	x = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[x] != '\0')
	{
		j = 0;
		while (str[x + j] != '\0' && str[x + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[x]);
			++j;
		}
		++x;
	}
	return (0);
}

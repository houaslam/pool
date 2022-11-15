/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 07:45:59 by houaslam          #+#    #+#             */
/*   Updated: 2022/07/31 08:09:03 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	p;

	p = 1;
	ft_strlowcase(str);
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	while (str[p] != '\0')
	{
		if (!((str[p - 1] >= 'a' && str[p - 1] <= 'z')
				|| (str[p - 1] >= 48 && str[p - 1] <= 57)
				|| (str[p - 1] >= 'A' && str[p - 1] <= 'Z'))
			&& (str[p] >= 'a' && str[p] <= 'z'))
					str[p] = str[p] - 32;
				p++;
	}
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 14:10:17 by houaslam          #+#    #+#             */
/*   Updated: 2022/07/30 17:27:14 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *arc)
{
	int	i;

	i = 0;
	while (arc[i] != '\0')
	{
			dest[i] = arc[i];
			i++;
	}
	dest[i] = '\0';
	return (dest);
}

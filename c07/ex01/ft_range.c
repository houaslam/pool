/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 18:51:27 by houaslam          #+#    #+#             */
/*   Updated: 2022/08/09 13:52:56 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*res;

	i = 0;
	res = (int *) malloc (sizeof(int) *(max - min));
	if (!res)
		return (0);
	if (min >= max)
		return (NULL);
	while (min < max)
	{
		res[i] = min;
		i++;
		min++;
	}
	return (res);
}

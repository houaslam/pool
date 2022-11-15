/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 08:36:11 by houaslam          #+#    #+#             */
/*   Updated: 2022/08/10 10:46:44 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

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

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src [j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		final_len;
	char	*result;

	i = 0;
	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	final_len = ft_strlen(sep) * (size - 1);
	while (i < size)
	{
		final_len += ft_strlen(strs[i++]);
	}
	final_len++;
	result = (char *)malloc(sizeof(char) * final_len);
	if (!result)
		return (0);
	ft_strcpy(result, strs[0]);
	i = 1;
	while (i < size)
	{
		ft_strcat(result, sep);
		ft_strcat(result, strs[i]);
		i++;
	}
	return (result);
}

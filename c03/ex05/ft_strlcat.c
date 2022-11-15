/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 21:13:17 by houaslam          #+#    #+#             */
/*   Updated: 2022/08/11 21:30:51 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	d;
	unsigned int	s;

	i = 0;
	d = ft_len(dest);
	s = ft_len(src);
	if (size == 0 || d >= size)
		return (size + ft_len(src));
	while (src[i] != '\0' && i < size - d - 1)
	{
		dest[d + i] = src[i];
		i++;
	}
	dest[i + 1] = '\0';
	return (s);
}

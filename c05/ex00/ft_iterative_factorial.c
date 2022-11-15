/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houaslam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 17:09:00 by houaslam          #+#    #+#             */
/*   Updated: 2022/08/06 09:19:08 by houaslam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	nbr;

	nbr = nb;
	if (nb <= 1)
	{
		if (nb == 1 || nb == 0)
			return (1);
		return (0);
	}
	while (nb > 1)
	{
		nbr *= nb - 1;
		nb--;
	}
	return (nbr);
}

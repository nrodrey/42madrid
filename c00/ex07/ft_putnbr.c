/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcuesta- <rcuesta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2011/02/20 12:06:00 by esta-             #+#    #+#             */
/*   Updated: 2020/02/12 10:32:46 by rcuesta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putnbr_number(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	const int max = -2147483648;

	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else if (nb < 0)
	{
		if (nb == -max)
		{
			ft_putnbr(-214748364);
			ft_putnbr(8);
		}
		else
		{
			write(1, "-", 1);
			ft_putnbr(nb * -1);
		}
	}
	else
	{
		ft_putnbr_number('0' + nb % 10);
	}
}

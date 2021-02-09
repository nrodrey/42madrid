/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcuesta- <rcuesta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 09:02:59 by rcuesta-          #+#    #+#             */
/*   Updated: 2020/02/12 10:00:25 by rcuesta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	print_couples(int a, int b)
{
	char ac;
	char bc;

	if (!(a == 0 && b == 1))
	{
		ac = ',';
		write(1, &ac, 1);
		bc = ' ';
		write(1, &bc, 1);
	}
	bc = '0' + a % 10;
	a /= 10;
	ac = '0' + a % 10;
	write(1, &ac, 1);
	write(1, &bc, 1);
	ac = ' ';
	write(1, &ac, 1);
	bc = '0' + b % 10;
	b /= 10;
	ac = '0' + b % 10;
	write(1, &ac, 1);
	write(1, &bc, 1);
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	b = 1;
	while (a <= 98)
	{
		while (b <= 99)
		{
			if (a < b)
			{
				print_couples(a, b);
			}
			b += 1;
		}
		b = 0;
		a += 1;
	}
	a = 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcuesta- <rcuesta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 14:00:26 by rcuesta-          #+#    #+#             */
/*   Updated: 2020/02/12 13:03:34 by rcuesta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	print_numbers(int a, int b, int c)
{
	char ac;
	char bc;
	char cc;

	ac = '0' + a;
	write(1, &ac, 1);
	bc = '0' + b;
	write(1, &bc, 1);
	cc = '0' + c;
	write(1, &cc, 1);
	if (a != 7 || b != 8 || c != 9)
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = 0;
	b = 0;
	c = 0;
	while (a <= 7)
	{
		while (b <= 8)
		{
			while (c <= 9)
			{
				if (a != b && a != c && b != c)
				{
					print_numbers(a, b, c);
				}
				c += 1;
			}
			c = b + 1;
			b += 1;
		}
		b = a + 1;
		a += 1;
	}
}

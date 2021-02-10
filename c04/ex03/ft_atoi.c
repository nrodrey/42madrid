/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcuesta- <rcuesta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 10:08:01 by rcuesta-          #+#    #+#             */
/*   Updated: 2020/02/27 09:47:01 by rcuesta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_atoi(char *str)
{
	int x;
	int esnegativo;

	x = 0;
	esnegativo = 1;
	while (*str == ' ' || *str == '\n' || *str == '\r'
			|| *str == '\v' || *str == '\t' || *str == '\f')
		++str;
	while (*str == '-' || *str == '+')
	{
		if (*str == '+')
			++str;
		else if (*str == '-')
		{
			esnegativo *= -1;
			++str;
		}
	}
	while (*str >= 48 && *str <= 57)
	{
		x = x * 10 + (*str - 48);
		++str;
	}
	return (x * esnegativo);
}

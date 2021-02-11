/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcuesta- <rcuesta-@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 16:08:24 by rcuesta-          #+#    #+#             */
/*   Updated: 2020/02/25 22:13:51 by rcuesta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

int		ft_vertical(char *str)
{
	int x;

	x = 0;
	while (*str != '\n')
		++str;
	++str;
	if(*str == '\0')
		ft_map_error();
	while (*str != '\0')
	{
		if(*str == '\n')
			x++;
		++str;
	}
	return (x);
}

int		ft_horizontal(char *str)
{
	int x;

	x = 0;
	while (*str != '\n')
		++str;
	++str;
	if(*str == '\0')
		ft_map_error();
	while (*str != '\n')
	{
		++str;
		x++;
	}
	return (x);
}

int		ft_atoi(char *str)
{

	int x;
	int y;
	int w;
	
	w = 0;
	y = 0;
	x = 0;
	if (str[x] < 48 && str[x] > 57)
		ft_map_error();
	while(str[x] != '\n')
		x++;
	x -=3;
	while (str[w] >= '0' && str[w] <= '9' && w < x)
	{
		y = y * 10 + (str[w] - 48);
		w++;
	}
	return (y);
}

void	ft_chars(char *str, char *signs)
{
	int x;
	
	x = 0;
	if (str[x] < 48 && str[x] > 57)
		ft_map_error();
	while(str[x] != '\n')
		x++;
	x--;
	signs[2] = str[x];
	x--;
	signs[1]= str[x];
	x--;
	signs[0] = str[x];
}
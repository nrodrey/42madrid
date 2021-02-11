/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcuesta- <rcuesta-@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 13:26:07 by rcuesta-          #+#    #+#             */
/*   Updated: 2020/02/25 12:27:11 by rcuesta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"

void	ft_error(void)
{
	write(1, "error\n", 6);
	exit(0);
}

void	ft_map_error(void)
{
	write(1, "map error\n", 10);
	exit(0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

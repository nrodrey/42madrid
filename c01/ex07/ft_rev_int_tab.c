/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcuesta- <rcuesta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 09:22:19 by rcuesta-          #+#    #+#             */
/*   Updated: 2020/02/17 09:27:25 by rcuesta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int new_tab[size];
	int i;

	if (size <= 0)
		return ;
	i = 0;
	while (i < size)
	{
		new_tab[i] = tab[size - 1 - i];
		i += 1;
	}
	i = 0;
	while (i < size)
	{
		tab[i] = new_tab[i];
		i += 1;
	}
}

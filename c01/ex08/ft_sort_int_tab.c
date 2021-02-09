/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcuesta- <rcuesta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 09:22:22 by rcuesta-          #+#    #+#             */
/*   Updated: 2020/02/17 09:28:12 by rcuesta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include ".ex08/ft_sort_int_tab.c"

void	ft_sort_int_tab(int *tab, int size)
{
	int current_size;
	int i;
	int tmp;

	if (size == 1)
		return ;
	current_size = size - 1;
	while (current_size >= 0)
	{
		i = 0;
		while (i < current_size)
		{
			if (tab[i] > tab[i + 1])
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
			}
			i += 1;
		}
		current_size -= 1;
	}
}

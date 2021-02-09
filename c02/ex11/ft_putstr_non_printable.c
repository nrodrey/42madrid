/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcuesta- <rcuesta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 12:43:00 by esta-             #+#    #+#             */
/*   Updated: 2020/02/24 12:58:31 by rcuesta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	ch;
	char			*base;

	base = "0123456789abcdef";
	i = 0;
	while (1)
	{
		ch = str[i];
		if (ch == '\0')
		{
			break ;
		}
		if (ch < 32 || ch > 126)
		{
			write(1, "\\", 1);
			write(1, &base[ch / 16], 1);
			write(1, &base[ch % 16], 1);
		}
		else
		{
			write(1, &ch, 1);
		}
		i += 1;
	}
}

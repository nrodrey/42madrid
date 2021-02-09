/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcuesta- <rcuesta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/20 12:43:00 by esta-             #+#    #+#             */
/*   Updated: 2020/02/24 12:57:30 by rcuesta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int	ft_sizeme(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i])
	{
		i += 1;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int src_len;

	src_len = ft_sizeme(src);
	i = 0;
	if (size == 0)
		return (src_len);
	while (i < size - 1)
	{
		dest[i] = src[i];
		if (!src[i])
		{
			i += 1;
			break ;
		}
		i += 1;
	}
	dest[i] = '\0';
	return (src_len);
}
